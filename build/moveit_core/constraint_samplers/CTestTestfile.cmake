# CMake generated Testfile for 
# Source directory: /home/fabian/moveit2/moveit_core/constraint_samplers
# Build directory: /home/fabian/moveit2/build/moveit_core/constraint_samplers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_constraint_samplers]=] "/usr/bin/python3" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/fabian/moveit2/build/moveit_core/test_results/moveit_core/test_constraint_samplers.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/fabian/moveit2/build/moveit_core/ament_cmake_gmock/test_constraint_samplers.txt" "--command" "/home/fabian/moveit2/build/moveit_core/constraint_samplers/test_constraint_samplers" "--gtest_output=xml:/home/fabian/moveit2/build/moveit_core/test_results/moveit_core/test_constraint_samplers.gtest.xml")
set_tests_properties([=[test_constraint_samplers]=] PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/fabian/moveit2/build/moveit_core/constraint_samplers/test_constraint_samplers" TIMEOUT "60" WORKING_DIRECTORY "/home/fabian/moveit2/build/moveit_core/constraint_samplers" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/rolling/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/home/fabian/moveit2/moveit_core/constraint_samplers/CMakeLists.txt;42;ament_add_gmock;/home/fabian/moveit2/moveit_core/constraint_samplers/CMakeLists.txt;0;")
subdirs("../gmock")
