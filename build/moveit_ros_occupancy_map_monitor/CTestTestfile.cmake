# CMake generated Testfile for 
# Source directory: /home/fabian/moveit2/moveit_ros/occupancy_map_monitor
# Build directory: /home/fabian/moveit2/build/moveit_ros_occupancy_map_monitor
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[occupancy_map_monitor_tests]=] "/usr/bin/python3" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/fabian/moveit2/build/moveit_ros_occupancy_map_monitor/test_results/moveit_ros_occupancy_map_monitor/occupancy_map_monitor_tests.gtest.xml" "--package-name" "moveit_ros_occupancy_map_monitor" "--output-file" "/home/fabian/moveit2/build/moveit_ros_occupancy_map_monitor/ament_cmake_gmock/occupancy_map_monitor_tests.txt" "--command" "/home/fabian/moveit2/build/moveit_ros_occupancy_map_monitor/occupancy_map_monitor_tests" "--gtest_output=xml:/home/fabian/moveit2/build/moveit_ros_occupancy_map_monitor/test_results/moveit_ros_occupancy_map_monitor/occupancy_map_monitor_tests.gtest.xml")
set_tests_properties([=[occupancy_map_monitor_tests]=] PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/fabian/moveit2/build/moveit_ros_occupancy_map_monitor/occupancy_map_monitor_tests" TIMEOUT "60" WORKING_DIRECTORY "/home/fabian/moveit2/build/moveit_ros_occupancy_map_monitor" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/rolling/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/home/fabian/moveit2/moveit_ros/occupancy_map_monitor/CMakeLists.txt;69;ament_add_gmock;/home/fabian/moveit2/moveit_ros/occupancy_map_monitor/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
