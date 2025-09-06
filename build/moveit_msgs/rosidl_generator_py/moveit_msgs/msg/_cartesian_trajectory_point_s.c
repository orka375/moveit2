// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
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
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__struct.h"
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__functions.h"

bool moveit_msgs__msg__cartesian_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__cartesian_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__cartesian_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("moveit_msgs.msg._cartesian_trajectory_point", (char *)PyUnicode_1BYTE_DATA(module_attr), 43) == 0);
    assert(strncmp("CartesianTrajectoryPoint", (char *)PyUnicode_1BYTE_DATA(name_attr), 24) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  moveit_msgs__msg__CartesianTrajectoryPoint * ros_message = _ros_message;
  {  // point
    PyObject * field = PyObject_GetAttrString(_pymsg, "point");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__cartesian_point__convert_from_py(field, &ros_message->point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_from_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_from_start");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__duration__convert_from_py(field, &ros_message->time_from_start)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__cartesian_trajectory_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianTrajectoryPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._cartesian_trajectory_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianTrajectoryPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__CartesianTrajectoryPoint * ros_message = (moveit_msgs__msg__CartesianTrajectoryPoint *)raw_ros_message;
  {  // point
    PyObject * field = NULL;
    field = moveit_msgs__msg__cartesian_point__convert_to_py(&ros_message->point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_from_start
    PyObject * field = NULL;
    field = builtin_interfaces__msg__duration__convert_to_py(&ros_message->time_from_start);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_from_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
