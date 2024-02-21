# generated from rosidl_generator_py/resource/_idl.py.em
# with input from create_message_types:srv/Light.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Light_Request(type):
    """Metaclass of message 'Light_Request'."""

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
            module = import_type_support('create_message_types')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'create_message_types.srv.Light_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__light__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__light__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__light__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__light__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__light__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Light_Request(metaclass=Metaclass_Light_Request):
    """Message class 'Light_Request'."""

    __slots__ = [
        '_brightnesses_01',
        '_brightnesses_02',
        '_brightnesses_03',
        '_brightnesses_04',
        '_command',
        '_hostname',
        '_lighting_command',
        '_verbose',
    ]

    _fields_and_field_types = {
        'brightnesses_01': 'float',
        'brightnesses_02': 'float',
        'brightnesses_03': 'float',
        'brightnesses_04': 'float',
        'command': 'string',
        'hostname': 'string',
        'lighting_command': 'string',
        'verbose': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brightnesses_01 = kwargs.get('brightnesses_01', float())
        self.brightnesses_02 = kwargs.get('brightnesses_02', float())
        self.brightnesses_03 = kwargs.get('brightnesses_03', float())
        self.brightnesses_04 = kwargs.get('brightnesses_04', float())
        self.command = kwargs.get('command', str())
        self.hostname = kwargs.get('hostname', str())
        self.lighting_command = kwargs.get('lighting_command', str())
        self.verbose = kwargs.get('verbose', str())

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
        if self.brightnesses_01 != other.brightnesses_01:
            return False
        if self.brightnesses_02 != other.brightnesses_02:
            return False
        if self.brightnesses_03 != other.brightnesses_03:
            return False
        if self.brightnesses_04 != other.brightnesses_04:
            return False
        if self.command != other.command:
            return False
        if self.hostname != other.hostname:
            return False
        if self.lighting_command != other.lighting_command:
            return False
        if self.verbose != other.verbose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brightnesses_01(self):
        """Message field 'brightnesses_01'."""
        return self._brightnesses_01

    @brightnesses_01.setter
    def brightnesses_01(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brightnesses_01' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brightnesses_01' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brightnesses_01 = value

    @builtins.property
    def brightnesses_02(self):
        """Message field 'brightnesses_02'."""
        return self._brightnesses_02

    @brightnesses_02.setter
    def brightnesses_02(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brightnesses_02' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brightnesses_02' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brightnesses_02 = value

    @builtins.property
    def brightnesses_03(self):
        """Message field 'brightnesses_03'."""
        return self._brightnesses_03

    @brightnesses_03.setter
    def brightnesses_03(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brightnesses_03' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brightnesses_03' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brightnesses_03 = value

    @builtins.property
    def brightnesses_04(self):
        """Message field 'brightnesses_04'."""
        return self._brightnesses_04

    @brightnesses_04.setter
    def brightnesses_04(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brightnesses_04' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brightnesses_04' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brightnesses_04 = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value

    @builtins.property
    def hostname(self):
        """Message field 'hostname'."""
        return self._hostname

    @hostname.setter
    def hostname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hostname' field must be of type 'str'"
        self._hostname = value

    @builtins.property
    def lighting_command(self):
        """Message field 'lighting_command'."""
        return self._lighting_command

    @lighting_command.setter
    def lighting_command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lighting_command' field must be of type 'str'"
        self._lighting_command = value

    @builtins.property
    def verbose(self):
        """Message field 'verbose'."""
        return self._verbose

    @verbose.setter
    def verbose(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'verbose' field must be of type 'str'"
        self._verbose = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Light_Response(type):
    """Metaclass of message 'Light_Response'."""

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
            module = import_type_support('create_message_types')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'create_message_types.srv.Light_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__light__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__light__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__light__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__light__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__light__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Light_Response(metaclass=Metaclass_Light_Response):
    """Message class 'Light_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_Light(type):
    """Metaclass of service 'Light'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('create_message_types')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'create_message_types.srv.Light')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__light

            from create_message_types.srv import _light
            if _light.Metaclass_Light_Request._TYPE_SUPPORT is None:
                _light.Metaclass_Light_Request.__import_type_support__()
            if _light.Metaclass_Light_Response._TYPE_SUPPORT is None:
                _light.Metaclass_Light_Response.__import_type_support__()


class Light(metaclass=Metaclass_Light):
    from create_message_types.srv._light import Light_Request as Request
    from create_message_types.srv._light import Light_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
