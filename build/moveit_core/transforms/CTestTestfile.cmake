# CMake generated Testfile for 
# Source directory: /home/fabian/moveit2/moveit_core/transforms
# Build directory: /home/fabian/moveit2/build/moveit_core/transforms
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_transforms]=] "/usr/bin/python3" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/fabian/moveit2/build/moveit_core/test_results/moveit_core/test_transforms.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/fabian/moveit2/build/moveit_core/ament_cmake_gtest/test_transforms.txt" "--command" "/home/fabian/moveit2/build/moveit_core/transforms/test_transforms" "--gtest_output=xml:/home/fabian/moveit2/build/moveit_core/test_results/moveit_core/test_transforms.gtest.xml")
set_tests_properties([=[test_transforms]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/fabian/moveit2/build/moveit_core/transforms/test_transforms" TIMEOUT "60" WORKING_DIRECTORY "/home/fabian/moveit2/build/moveit_core/transforms" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/rolling/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/fabian/moveit2/moveit_core/transforms/CMakeLists.txt;24;ament_add_gtest;/home/fabian/moveit2/moveit_core/transforms/CMakeLists.txt;0;")
