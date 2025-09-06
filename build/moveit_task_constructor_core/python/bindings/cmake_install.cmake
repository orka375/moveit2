# Install script for directory: /home/fabian/moveit2/moveit_task_constructor/core/python/bindings

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/fabian/moveit2/install/moveit_task_constructor_core")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/pymoveit_mtc.cpython-312-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/pymoveit_mtc.cpython-312-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/pymoveit_mtc.cpython-312-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages" TYPE MODULE FILES "/home/fabian/moveit2/build/moveit_task_constructor_core/python/bindings/pymoveit_mtc.cpython-312-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/pymoveit_mtc.cpython-312-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/pymoveit_mtc.cpython-312-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/pymoveit_mtc.cpython-312-x86_64-linux-gnu.so"
         OLD_RPATH "/home/fabian/moveit2/build/moveit_task_constructor_core/src/stages:/home/fabian/moveit2/install/moveit_msgs/lib:/opt/ros/rolling/lib:/home/fabian/moveit2/build/moveit_task_constructor_core/src:/home/fabian/moveit2/install/rviz_marker_tools/lib:/home/fabian/moveit2/install/moveit_ros_planning_interface/lib:/home/fabian/moveit2/install/moveit_ros_move_group/lib:/home/fabian/moveit2/install/moveit_ros_warehouse/lib:/home/fabian/moveit2/install/moveit_ros_planning/lib:/home/fabian/moveit2/install/moveit_ros_occupancy_map_monitor/lib:/home/fabian/moveit2/install/moveit_core/lib:/opt/ros/rolling/lib/x86_64-linux-gnu:/home/fabian/moveit2/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/pymoveit_mtc.cpython-312-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

