# CMake generated Testfile for 
# Source directory: /home/fabian/moveit2/moveit_core/utils/test
# Build directory: /home/fabian/moveit2/build/moveit_core/utils/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test-node_logging]=] "/usr/bin/python3" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/fabian/moveit2/build/moveit_core/test_results/moveit_core/test-node_logging.xunit.xml" "--package-name" "moveit_core" "--output-file" "/home/fabian/moveit2/build/moveit_core/launch_test/test-node_logging.txt" "--env" "PYTHONDONTWRITEBYTECODE=1" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/fabian/moveit2/moveit_core/utils/test/rosout_publish_test.py" "dut:=logger_dut" "--junit-xml=/home/fabian/moveit2/build/moveit_core/test_results/moveit_core/test-node_logging.xunit.xml" "--package-name=moveit_core")
set_tests_properties([=[test-node_logging]=] PROPERTIES  LABELS "launch_test" TIMEOUT "60" WORKING_DIRECTORY "/home/fabian/moveit2/build/moveit_core/utils/test" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;132;ament_add_test;/home/fabian/moveit2/moveit_core/utils/test/CMakeLists.txt;13;add_launch_test;/home/fabian/moveit2/moveit_core/utils/test/CMakeLists.txt;0;")
