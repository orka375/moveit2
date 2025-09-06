# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_task_constructor_msgs:srv/GetSolution.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetSolution_Request(type):
    """Metaclass of message 'GetSolution_Request'."""

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
            module = import_type_support('moveit_task_constructor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_task_constructor_msgs.srv.GetSolution_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_solution__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_solution__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_solution__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_solution__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_solution__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSolution_Request(metaclass=Metaclass_GetSolution_Request):
    """Message class 'GetSolution_Request'."""

    __slots__ = [
        '_solution_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'solution_id': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.solution_id = kwargs.get('solution_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.solution_id != other.solution_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def solution_id(self):
        """Message field 'solution_id'."""
        return self._solution_id

    @solution_id.setter
    def solution_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'solution_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'solution_id' field must be an unsigned integer in [0, 4294967295]"
        self._solution_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetSolution_Response(type):
    """Metaclass of message 'GetSolution_Response'."""

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
            module = import_type_support('moveit_task_constructor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_task_constructor_msgs.srv.GetSolution_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_solution__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_solution__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_solution__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_solution__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_solution__response

            from moveit_task_constructor_msgs.msg import Solution
            if Solution.__class__._TYPE_SUPPORT is None:
                Solution.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSolution_Response(metaclass=Metaclass_GetSolution_Response):
    """Message class 'GetSolution_Response'."""

    __slots__ = [
        '_solution',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'solution': 'moveit_task_constructor_msgs/Solution',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_task_constructor_msgs', 'msg'], 'Solution'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_task_constructor_msgs.msg import Solution
        self.solution = kwargs.get('solution', Solution())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.solution != other.solution:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def solution(self):
        """Message field 'solution'."""
        return self._solution

    @solution.setter
    def solution(self, value):
        if self._check_fields:
            from moveit_task_constructor_msgs.msg import Solution
            assert \
                isinstance(value, Solution), \
                "The 'solution' field must be a sub message of type 'Solution'"
        self._solution = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetSolution_Event(type):
    """Metaclass of message 'GetSolution_Event'."""

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
            module = import_type_support('moveit_task_constructor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_task_constructor_msgs.srv.GetSolution_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_solution__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_solution__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_solution__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_solution__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_solution__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSolution_Event(metaclass=Metaclass_GetSolution_Event):
    """Message class 'GetSolution_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<moveit_task_constructor_msgs/GetSolution_Request, 1>',
        'response': 'sequence<moveit_task_constructor_msgs/GetSolution_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['moveit_task_constructor_msgs', 'srv'], 'GetSolution_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['moveit_task_constructor_msgs', 'srv'], 'GetSolution_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from moveit_task_constructor_msgs.srv import GetSolution_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, GetSolution_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GetSolution_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from moveit_task_constructor_msgs.srv import GetSolution_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, GetSolution_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GetSolution_Response'"
        self._response = value


class Metaclass_GetSolution(type):
    """Metaclass of service 'GetSolution'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_task_constructor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_task_constructor_msgs.srv.GetSolution')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_solution

            from moveit_task_constructor_msgs.srv import _get_solution
            if _get_solution.Metaclass_GetSolution_Request._TYPE_SUPPORT is None:
                _get_solution.Metaclass_GetSolution_Request.__import_type_support__()
            if _get_solution.Metaclass_GetSolution_Response._TYPE_SUPPORT is None:
                _get_solution.Metaclass_GetSolution_Response.__import_type_support__()
            if _get_solution.Metaclass_GetSolution_Event._TYPE_SUPPORT is None:
                _get_solution.Metaclass_GetSolution_Event.__import_type_support__()


class GetSolution(metaclass=Metaclass_GetSolution):
    from moveit_task_constructor_msgs.srv._get_solution import GetSolution_Request as Request
    from moveit_task_constructor_msgs.srv._get_solution import GetSolution_Response as Response
    from moveit_task_constructor_msgs.srv._get_solution import GetSolution_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
