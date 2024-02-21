# generated from rosidl_generator_py/resource/_idl.py.em
# with input from create_message_types:srv/Camera.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Camera_Request(type):
    """Metaclass of message 'Camera_Request'."""

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
                'create_message_types.srv.Camera_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Camera_Request(metaclass=Metaclass_Camera_Request):
    """Message class 'Camera_Request'."""

    __slots__ = [
        '_camera_name',
        '_command',
        '_hostname',
        '_media_log_command',
        '_verbose',
    ]

    _fields_and_field_types = {
        'camera_name': 'string',
        'command': 'string',
        'hostname': 'string',
        'media_log_command': 'string',
        'verbose': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.camera_name = kwargs.get('camera_name', str())
        self.command = kwargs.get('command', str())
        self.hostname = kwargs.get('hostname', str())
        self.media_log_command = kwargs.get('media_log_command', str())
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
        if self.camera_name != other.camera_name:
            return False
        if self.command != other.command:
            return False
        if self.hostname != other.hostname:
            return False
        if self.media_log_command != other.media_log_command:
            return False
        if self.verbose != other.verbose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def camera_name(self):
        """Message field 'camera_name'."""
        return self._camera_name

    @camera_name.setter
    def camera_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_name' field must be of type 'str'"
        self._camera_name = value

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
    def media_log_command(self):
        """Message field 'media_log_command'."""
        return self._media_log_command

    @media_log_command.setter
    def media_log_command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'media_log_command' field must be of type 'str'"
        self._media_log_command = value

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


class Metaclass_Camera_Response(type):
    """Metaclass of message 'Camera_Response'."""

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
                'create_message_types.srv.Camera_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Camera_Response(metaclass=Metaclass_Camera_Response):
    """Message class 'Camera_Response'."""

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


class Metaclass_Camera(type):
    """Metaclass of service 'Camera'."""

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
                'create_message_types.srv.Camera')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__camera

            from create_message_types.srv import _camera
            if _camera.Metaclass_Camera_Request._TYPE_SUPPORT is None:
                _camera.Metaclass_Camera_Request.__import_type_support__()
            if _camera.Metaclass_Camera_Response._TYPE_SUPPORT is None:
                _camera.Metaclass_Camera_Response.__import_type_support__()


class Camera(metaclass=Metaclass_Camera):
    from create_message_types.srv._camera import Camera_Request as Request
    from create_message_types.srv._camera import Camera_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
