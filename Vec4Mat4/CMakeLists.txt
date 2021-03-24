cmake_minimum_required(VERSION 3.12)
#-------------------------------------------------------------------------------------------
# I'm going to use vcpk in most cases for our install of 3rd party libs
# this is going to check the environment variable for CMAKE_TOOLCHAIN_FILE and this must point to where
# vcpkg.cmake is in the University this is set in your .bash_profile to
# export CMAKE_TOOLCHAIN_FILE=/public/devel/2020/vcpkg/scripts/buildsystems/vcpkg.cmake
# to build see the NGL instructions 
# Windows :- mkdir build; cd build ; cmake -DCMAKE_PREFIX_PATH=~/NGL/ .. ; cmake --build . 
# Linux / Mac mkdir build; cd build; cmake -DCMAKE_PREFIX_PATH~/NGL/ .. ; make
#-------------------------------------------------------------------------------------------
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
   set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()

# Name of the project
project(Vec4Mat4Build)

# Set to C++ 17
set(CMAKE_CXX_STANDARD 17)

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)
enable_testing()
find_package(Qt5 COMPONENTS Widgets REQUIRED)

find_package(glfw3 CONFIG REQUIRED)
find_package(OpenImageIO CONFIG REQUIRED)
find_package(NGL CONFIG REQUIRED)
#the file(GLOB...) allows for wildcard additions of our src dir
set(SOURCES 
			${PROJECT_SOURCE_DIR}/Vec4Mat4.cpp  
			${PROJECT_SOURCE_DIR}/Construction.cpp  
			${PROJECT_SOURCE_DIR}/Math.cpp  
			${PROJECT_SOURCE_DIR}/Functions.h  

)

add_executable(Vec4Mat4 ${SOURCES})

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)


# now add NGL specific values
# add exe and link libs that must be after the other defines
find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(Vec4Mat4 PRIVATE glfw PRIVATE GTest::gtest Qt5::Widgets NGL )
target_link_libraries(Vec4Mat4 PRIVATE OpenImageIO::OpenImageIO OpenImageIO::OpenImageIO_Util)

