cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
set (CMAKE_CXX_FLAGS "-O3 -std=c++11")
project(cmakeSamples)

include_directories(~/include)
link_directories(~/lib)

find_package (OpenCV REQUIRED)

add_executable (drawPoints drawPoints.cpp)
target_link_libraries(drawPoints ${OpenCV_LIBRARIES})
