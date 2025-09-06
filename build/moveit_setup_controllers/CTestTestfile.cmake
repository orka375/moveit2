# CMake generated Testfile for 
# Source directory: /home/fabian/moveit2/moveit_setup_assistant/moveit_setup_controllers
# Build directory: /home/fabian/moveit2/build/moveit_setup_controllers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_controllers]=] "/usr/bin/python3" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/fabian/moveit2/build/moveit_setup_controllers/test_results/moveit_setup_controllers/test_controllers.gtest.xml" "--package-name" "moveit_setup_controllers" "--output-file" "/home/fabian/moveit2/build/moveit_setup_controllers/ament_cmake_gtest/test_controllers.txt" "--command" "/home/fabian/moveit2/build/moveit_setup_controllers/test_controllers" "--gtest_output=xml:/home/fabian/moveit2/build/moveit_setup_controllers/test_results/moveit_setup_controllers/test_controllers.gtest.xml")
set_tests_properties([=[test_controllers]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/fabian/moveit2/build/moveit_setup_controllers/test_controllers" TIMEOUT "60" WORKING_DIRECTORY "/home/fabian/moveit2/build/moveit_setup_controllers" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/rolling/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/fabian/moveit2/moveit_setup_assistant/moveit_setup_controllers/CMakeLists.txt;48;ament_add_gtest;/home/fabian/moveit2/moveit_setup_assistant/moveit_setup_controllers/CMakeLists.txt;0;")
subdirs("gtest")
