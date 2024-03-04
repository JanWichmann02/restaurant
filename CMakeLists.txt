cmake_minimum_required(VERSION 3.26)
project(restaurant)

set(CMAKE_CXX_STANDARD 17)

add_executable(restaurant main.cpp
        dish.cpp
        dish.h
        table.cpp
        table.h
        guest.cpp
        guest.h
)
