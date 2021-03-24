cmake_minimum_required(VERSION 3.2)
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
   set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()
# Name of the project
project(MathLibCompareAll)
add_subdirectory(Vec4Mat4)