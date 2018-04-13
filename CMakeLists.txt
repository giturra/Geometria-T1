cmake_minimum_required(VERSION 3.9)
project(Tarea1)

set(CMAKE_CXX_STANDARD 11)

add_executable(Tarea1 main.cpp Elements/Point.h Elements/Point.cpp Elements/Vector.h Elements/Vector.cpp Elements/Segment.h Elements/Segment.cpp Elements/Polygon.h Elements/Polygon.cpp)