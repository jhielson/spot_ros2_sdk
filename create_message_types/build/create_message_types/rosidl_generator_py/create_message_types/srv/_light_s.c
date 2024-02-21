// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from create_message_types:srv/Light.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "create_message_types/srv/detail/light__struct.h"
#include "create_message_types/srv/detail/light__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool create_message_types__srv__light__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("create_message_types.srv._light.Light_Request", full_classname_dest, 45) == 0);
  }
  create_message_types__srv__Light_Request * ros_message = _ros_message;
  {  // brightnesses_01
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightnesses_01");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brightnesses_01 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brightnesses_02
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightnesses_02");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brightnesses_02 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brightnesses_03
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightnesses_03");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brightnesses_03 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brightnesses_04
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightnesses_04");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brightnesses_04 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->command, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hostname
    PyObject * field = PyObject_GetAttrString(_pymsg, "hostname");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hostname, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lighting_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "lighting_command");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lighting_command, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // verbose
    PyObject * field = PyObject_GetAttrString(_pymsg, "verbose");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->verbose, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * create_message_types__srv__light__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Light_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("create_message_types.srv._light");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Light_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  create_message_types__srv__Light_Request * ros_message = (create_message_types__srv__Light_Request *)raw_ros_message;
  {  // brightnesses_01
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brightnesses_01);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightnesses_01", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brightnesses_02
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brightnesses_02);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightnesses_02", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brightnesses_03
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brightnesses_03);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightnesses_03", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brightnesses_04
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brightnesses_04);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightnesses_04", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->command.data,
      strlen(ros_message->command.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hostname
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hostname.data,
      strlen(ros_message->hostname.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hostname", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lighting_command
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lighting_command.data,
      strlen(ros_message->lighting_command.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lighting_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // verbose
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->verbose.data,
      strlen(ros_message->verbose.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "verbose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "create_message_types/srv/detail/light__struct.h"
// already included above
// #include "create_message_types/srv/detail/light__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool create_message_types__srv__light__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("create_message_types.srv._light.Light_Response", full_classname_dest, 46) == 0);
  }
  create_message_types__srv__Light_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->result = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * create_message_types__srv__light__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Light_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("create_message_types.srv._light");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Light_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  create_message_types__srv__Light_Response * ros_message = (create_message_types__srv__Light_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->result ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
