// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
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
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__multi_dof_joint_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__multi_dof_joint_trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__robot_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("moveit_msgs.msg._robot_trajectory", (char *)PyUnicode_1BYTE_DATA(module_attr), 33) == 0);
    assert(strncmp("RobotTrajectory", (char *)PyUnicode_1BYTE_DATA(name_attr), 15) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  moveit_msgs__msg__RobotTrajectory * ros_message = _ros_message;
  {  // joint_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_trajectory");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__joint_trajectory__convert_from_py(field, &ros_message->joint_trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // multi_dof_joint_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi_dof_joint_trajectory");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__multi_dof_joint_trajectory__convert_from_py(field, &ros_message->multi_dof_joint_trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__robot_trajectory__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotTrajectory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._robot_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotTrajectory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__RobotTrajectory * ros_message = (moveit_msgs__msg__RobotTrajectory *)raw_ros_message;
  {  // joint_trajectory
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory__convert_to_py(&ros_message->joint_trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi_dof_joint_trajectory
    PyObject * field = NULL;
    field = trajectory_msgs__msg__multi_dof_joint_trajectory__convert_to_py(&ros_message->multi_dof_joint_trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi_dof_joint_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
