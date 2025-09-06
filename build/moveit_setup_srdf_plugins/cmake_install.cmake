# Install script for directory: /home/fabian/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/fabian/moveit2/install/moveit_setup_srdf_plugins")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/fabian/moveit2/build/moveit_setup_srdf_plugins/gtest/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_srdf_plugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_srdf_plugins.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_srdf_plugins.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/libmoveit_setup_srdf_plugins.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_srdf_plugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_srdf_plugins.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_srdf_plugins.so"
         OLD_RPATH "/home/fabian/moveit2/install/moveit_setup_framework/lib:/home/fabian/moveit2/install/moveit_ros_visualization/lib:/home/fabian/moveit2/install/moveit_ros_robot_interaction/lib:/home/fabian/moveit2/install/moveit_ros_planning_interface/lib:/home/fabian/moveit2/install/moveit_ros_warehouse/lib:/opt/ros/rolling/lib/x86_64-linux-gnu:/opt/ros/rolling/lib:/home/fabian/moveit2/install/moveit_ros_move_group/lib:/home/fabian/moveit2/install/moveit_ros_planning/lib:/home/fabian/moveit2/install/moveit_ros_occupancy_map_monitor/lib:/home/fabian/moveit2/install/moveit_core/lib:/opt/ros/rolling/opt/rviz_ogre_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_srdf_plugins.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins" TYPE FILE FILES "/home/fabian/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/moveit_setup_framework_plugins.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_setup_srdf_plugins" TYPE DIRECTORY FILES "/home/fabian/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/environment" TYPE FILE FILES "/opt/ros/rolling/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/environment" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins" TYPE FILE FILES "/home/fabian/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/moveit_setup_framework_plugins.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/moveit_setup_srdf_plugins")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/moveit_setup_srdf_plugins")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/environment" TYPE FILE FILES "/opt/ros/rolling/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/environment" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/environment" TYPE FILE FILES "/opt/ros/rolling/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/environment" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_index/share/ament_index/resource_index/packages/moveit_setup_srdf_plugins")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/moveit_setup_framework__pluginlib__plugin" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_index/share/ament_index/resource_index/moveit_setup_framework__pluginlib__plugin/moveit_setup_srdf_plugins")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/cmake/moveit_setup_srdf_pluginsTargetsExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/cmake/moveit_setup_srdf_pluginsTargetsExport.cmake"
         "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/CMakeFiles/Export/f86b1ddd08a0de294f42ace0d1c4ce44/moveit_setup_srdf_pluginsTargetsExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/cmake/moveit_setup_srdf_pluginsTargetsExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/cmake/moveit_setup_srdf_pluginsTargetsExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/cmake" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/CMakeFiles/Export/f86b1ddd08a0de294f42ace0d1c4ce44/moveit_setup_srdf_pluginsTargetsExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/cmake" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/CMakeFiles/Export/f86b1ddd08a0de294f42ace0d1c4ce44/moveit_setup_srdf_pluginsTargetsExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/cmake" TYPE FILE FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins/cmake" TYPE FILE FILES
    "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_core/moveit_setup_srdf_pluginsConfig.cmake"
    "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_core/moveit_setup_srdf_pluginsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_srdf_plugins" TYPE FILE FILES "/home/fabian/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
