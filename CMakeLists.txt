cmake_minimum_required(VERSION 2.8.9)
# Name of the project
project(MathLibCompare)
#Bring the headers into the project (local ones)
include_directories(include)

#the file(GLOB...) allows for wildcard additions of our src dir
file(GLOB SOURCES "src/*.cpp")

# see what platform we are on and set platform defines
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
	add_definitions(-DDARWIN)
endif()



# now add NGL specific values
set ( PROJECT_LINK_LIBS -lNGL )
link_directories( ~/NGL/lib )
include_directories(~/NGL/include/)
# as NGL uses Qt we need to define this flag
add_definitions(-DQT5BUILD)
# NGL also needs the OpenGL framework from Qt so add it
find_package(Qt5OpenGL)

# add exe and link libs this must be after the other defines
add_executable(VectorComparison ${SOURCES})
target_link_libraries(MathLibCompare ${PROJECT_LINK_LIBS} )
target_link_libraries(MathLibCompare Qt5::OpenGL)

