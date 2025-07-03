cmake_minimum_required(VERSION 3.1.3)
project(sample_ros_pkg)

find_package(catkin REQUIRED)
catkin_package()

include_directories(include)

if(CATKIN_ENABLE_TESTING)
  catkin_add_gtest(test_sample
    test/src/test_sample.cpp
    src/sample.cpp
  )
endif()
