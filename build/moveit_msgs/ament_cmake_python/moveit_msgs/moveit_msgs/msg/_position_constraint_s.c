// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/PositionConstraint.idl
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
#include "moveit_msgs/msg/detail/position_constraint__struct.h"
#include "moveit_msgs/msg/detail/position_constraint__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__bounding_volume__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__bounding_volume__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__position_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("moveit_msgs.msg._position_constraint", (char *)PyUnicode_1BYTE_DATA(module_attr), 36) == 0);
    assert(strncmp("PositionConstraint", (char *)PyUnicode_1BYTE_DATA(name_attr), 18) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  moveit_msgs__msg__PositionConstraint * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // link_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->link_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // target_point_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_point_offset");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->target_point_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // constraint_region
    PyObject * field = PyObject_GetAttrString(_pymsg, "constraint_region");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__bounding_volume__convert_from_py(field, &ros_message->constraint_region)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->weight = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__position_constraint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PositionConstraint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._position_constraint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PositionConstraint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__PositionConstraint * ros_message = (moveit_msgs__msg__PositionConstraint *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->link_name.data,
      strlen(ros_message->link_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_point_offset
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->target_point_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_point_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // constraint_region
    PyObject * field = NULL;
    field = moveit_msgs__msg__bounding_volume__convert_to_py(&ros_message->constraint_region);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "constraint_region", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
