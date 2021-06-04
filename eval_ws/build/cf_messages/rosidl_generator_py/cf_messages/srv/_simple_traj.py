# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cf_messages:srv/SimpleTraj.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'duration'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SimpleTraj_Request(type):
    """Metaclass of message 'SimpleTraj_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cf_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cf_messages.srv.SimpleTraj_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__simple_traj__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__simple_traj__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__simple_traj__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__simple_traj__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__simple_traj__request

            from cf_messages.msg import Waypoint
            if Waypoint.__class__._TYPE_SUPPORT is None:
                Waypoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SimpleTraj_Request(metaclass=Metaclass_SimpleTraj_Request):
    """Message class 'SimpleTraj_Request'."""

    __slots__ = [
        '_traj',
        '_duration',
        '_len',
    ]

    _fields_and_field_types = {
        'traj': 'sequence<cf_messages/Waypoint>',
        'duration': 'sequence<float>',
        'len': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cf_messages', 'msg'], 'Waypoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.traj = kwargs.get('traj', [])
        self.duration = array.array('f', kwargs.get('duration', []))
        self.len = kwargs.get('len', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.traj != other.traj:
            return False
        if self.duration != other.duration:
            return False
        if self.len != other.len:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def traj(self):
        """Message field 'traj'."""
        return self._traj

    @traj.setter
    def traj(self, value):
        if __debug__:
            from cf_messages.msg import Waypoint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Waypoint) for v in value) and
                 True), \
                "The 'traj' field must be a set or sequence and each value of type 'Waypoint'"
        self._traj = value

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'duration' array.array() must have the type code of 'f'"
            self._duration = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'duration' field must be a set or sequence and each value of type 'float'"
        self._duration = array.array('f', value)

    @property  # noqa: A003
    def len(self):  # noqa: A003
        """Message field 'len'."""
        return self._len

    @len.setter  # noqa: A003
    def len(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'len' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'len' field must be an integer in [-128, 127]"
        self._len = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SimpleTraj_Response(type):
    """Metaclass of message 'SimpleTraj_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cf_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cf_messages.srv.SimpleTraj_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__simple_traj__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__simple_traj__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__simple_traj__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__simple_traj__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__simple_traj__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SimpleTraj_Response(metaclass=Metaclass_SimpleTraj_Response):
    """Message class 'SimpleTraj_Response'."""

    __slots__ = [
        '_ret',
    ]

    _fields_and_field_types = {
        'ret': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ret != other.ret:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ret(self):
        """Message field 'ret'."""
        return self._ret

    @ret.setter
    def ret(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ret' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ret' field must be an integer in [-128, 127]"
        self._ret = value


class Metaclass_SimpleTraj(type):
    """Metaclass of service 'SimpleTraj'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cf_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cf_messages.srv.SimpleTraj')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__simple_traj

            from cf_messages.srv import _simple_traj
            if _simple_traj.Metaclass_SimpleTraj_Request._TYPE_SUPPORT is None:
                _simple_traj.Metaclass_SimpleTraj_Request.__import_type_support__()
            if _simple_traj.Metaclass_SimpleTraj_Response._TYPE_SUPPORT is None:
                _simple_traj.Metaclass_SimpleTraj_Response.__import_type_support__()


class SimpleTraj(metaclass=Metaclass_SimpleTraj):
    from cf_messages.srv._simple_traj import SimpleTraj_Request as Request
    from cf_messages.srv._simple_traj import SimpleTraj_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
