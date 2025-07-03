cmake_minimum_required(VERSION 3.1.3)
project(sample_ros_pkg)

find_package(catkin REQUIRED)
catkin_package()

if(CATKIN_ENABLE_TESTING)
  catkin_add_gtest(test_sum
    test/src/test_sum.cpp
    src/sum.cpp
  )
endif()
