# CMake generated Testfile for 
# Source directory: /home/fabian/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins
# Build directory: /home/fabian/moveit2/build/moveit_setup_srdf_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_srdf]=] "/usr/bin/python3" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/test_results/moveit_setup_srdf_plugins/test_srdf.gtest.xml" "--package-name" "moveit_setup_srdf_plugins" "--output-file" "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/ament_cmake_gtest/test_srdf.txt" "--command" "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/test_srdf" "--gtest_output=xml:/home/fabian/moveit2/build/moveit_setup_srdf_plugins/test_results/moveit_setup_srdf_plugins/test_srdf.gtest.xml")
set_tests_properties([=[test_srdf]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/fabian/moveit2/build/moveit_setup_srdf_plugins/test_srdf" TIMEOUT "60" WORKING_DIRECTORY "/home/fabian/moveit2/build/moveit_setup_srdf_plugins" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/rolling/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/fabian/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/CMakeLists.txt;58;ament_add_gtest;/home/fabian/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/CMakeLists.txt;0;")
subdirs("gtest")
