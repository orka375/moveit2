# CMake generated Testfile for 
# Source directory: /home/fabian/moveit2/moveit_ros/tests
# Build directory: /home/fabian/moveit2/build/moveit_ros_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[launch_move_group_api.test.py]=] "/usr/bin/python3" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/fabian/moveit2/build/moveit_ros_tests/test_results/moveit_ros_tests/launch_move_group_api.test.py.xunit.xml" "--package-name" "moveit_ros_tests" "--output-file" "/home/fabian/moveit2/build/moveit_ros_tests/ros_test/launch_move_group_api.test.py.txt" "--command" "ros2" "test" "/home/fabian/moveit2/moveit_ros/tests/launch/move_group_api.test.py" "test_binary_dir:=/home/fabian/moveit2/build/moveit_ros_tests" "--junit-xml=/home/fabian/moveit2/build/moveit_ros_tests/test_results/moveit_ros_tests/launch_move_group_api.test.py.xunit.xml" "--package-name=moveit_ros_tests")
set_tests_properties([=[launch_move_group_api.test.py]=] PROPERTIES  TIMEOUT "30" WORKING_DIRECTORY "/home/fabian/moveit2/build/moveit_ros_tests" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ros_testing/cmake/add_ros_test.cmake;73;ament_add_test;/home/fabian/moveit2/moveit_ros/tests/CMakeLists.txt;17;add_ros_test;/home/fabian/moveit2/moveit_ros/tests/CMakeLists.txt;0;")
subdirs("gtest")
