"""
Headless client for the Crazyflie.
"""
import logging
import os
import signal
import sys
import serial
import threading
import time
import subprocess
import math

import cflib.crtp
from cflib.crtp.crtpstack import CRTPPacket
from cflib.crazyflie import Crazyflie

os.environ["SDL_VIDEODRIVER"] = "dummy"

CRTP_PORT_MICROROS = 9
CRTP_PORT_CONSOLE = 0

class CrazyradioBridge():

    def __init__(self, link_uri, serialport):
        """Initialize the headless client and libraries"""
        self._serial = serialport

        self.link = cflib.crtp.get_link_driver(link_uri, None, None)
        #self.link._radio_manager._radios[0].radio.set_power(0)

        self._console = ""
        self.is_connected = True

        self._q = []

        self.serialthread = threading.Thread(target=self._serial_listener)
        self.serialthread.start()

        self.cfthread = threading.Thread(target=self._cf_listener)
        self.cfthread.start()

    def _link_quality(self,q):
        self._q.append(q)
        if len(self._q) > 10:
            print("{:0.3f}".format((1/10)*math.sqrt(sum([x**2 for x in self._q])/len(self._q))), end="\r")
            self._q = []

    def _serial_listener(self):
        while self.is_connected:
            data = self._serial.read(size=29)
            if(data):
                pk = CRTPPacket()
                pk.port = CRTP_PORT_MICROROS
                pk.data = data
                self.link.send_packet(pk)

    def _cf_listener(self):
        while self.is_connected:
            pk = self.link.receive_packet(- 1)
            if pk is not None and pk.port == CRTP_PORT_CONSOLE:
                self._console = self._console + pk.data.decode("utf-8") 
                if '\n' in self._console:
                    print("[Console]" + str(self._console ), end="")
                    self._console = ""
            if pk is None or pk.port != CRTP_PORT_MICROROS:
                continue
            print(pk)
            self._serial.write(pk.data)
            self._serial.flush()

def main():
    # Creating a socat bridge
    serial_dev = '/tmp/ttyS11'
    serial_dev_agent = '/tmp/ttyS10'
    socat_process = subprocess.Popen(["socat", "PTY,link=" + serial_dev_agent, "PTY,link=" + serial_dev])
    time.sleep(1)
    print("Use " + serial_dev_agent + " for micro-ROS agent connection")

    # Set logging level
    logging.basicConfig(level=logging.INFO)

    # Open serial port
    serialport = serial.Serial(serial_dev, baudrate=115200, timeout=0.2)

    # Configure radio link
    cflib.crtp.radiodriver.set_retries_before_disconnect(-1)
    cflib.crtp.radiodriver.set_retries(1)
    cflib.crtp.init_drivers(enable_debug_driver=False)
    link_uri = "usb://0"

    try:
        while True:
            cf = CrazyradioBridge(link_uri, serialport)
            while cf.is_connected:
                time.sleep(0.1)
            print("Disconected from: " + str(link_uri))
    except KeyboardInterrupt:
        pass

    os.killpg(os.getpgid(socat_process.pid), signal.SIGTERM)


if __name__ == "__main__":
    main()
