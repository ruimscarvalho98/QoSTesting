ros2 run csv_creator latency_test --ros-args -p num_samples:=100 -p num_bytes:=8 -p frequency:=1 -p id:=2 -p filename:="rtt_reliable_50cm_GS_CF"
sleep 1
ros2 run csv_creator latency_test --ros-args -p num_samples:=100 -p num_bytes:=16 -p frequency:=1 -p id:=2 -p filename:="rtt_reliable_50cm_GS_CF"
sleep 1
ros2 run csv_creator latency_test --ros-args -p num_samples:=100 -p num_bytes:=32 -p frequency:=1 -p id:=2 -p filename:="rtt_reliable_50cm_GS_CF"
sleep 1
ros2 run csv_creator latency_test --ros-args -p num_samples:=100 -p num_bytes:=64 -p frequency:=1 -p id:=2 -p filename:="rtt_reliable_50cm_GS_CF"
sleep 1
ros2 run csv_creator latency_test --ros-args -p num_samples:=100 -p num_bytes:=128 -p frequency:=1 -p id:=2 -p filename:="rtt_reliable_50cm_GS_CF"
sleep 1
ros2 run csv_creator latency_test --ros-args -p num_samples:=100 -p num_bytes:=256 -p frequency:=1 -p id:=2 -p filename:="rtt_reliable_50cm_GS_CF"
sleep 1
#ros2 run csv_creator latency_test --ros-args -p num_samples:=100 -p num_bytes:=512 -p frequency:=1 -p id:=2 -p filename:="rtt_reliable_50cm_GS_CF"
#sleep 1
#ros2 run csv_creator latency_test --ros-args -p num_samples:=100 -p num_bytes:=1024 -p frequency:=1 -p id:=2 -p filename:="rtt_reliable_50cm_GS_CF"
#sleep 1