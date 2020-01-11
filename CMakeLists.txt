cmake_minimum_required(VERSION 3.2)

project(lab6)

add_executable(lab6
        main.cpp
        list.hpp
        my_allocator.hpp
        stack.hpp
        Polygon.hpp
        Polygon.cpp
        )

set_property(TARGET lab6 PROPERTY CXX_STANDARD 17)