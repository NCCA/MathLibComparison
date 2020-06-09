cmake_minimum_required(VERSION 3.2)
# Name of the project
project(MathLibCompare)
#Bring the headers into the project (local ones)
include_directories(include)

#the file(GLOB...) allows for wildcard additions of our src dir
file(GLOB SOURCES "src/*.cpp")



# now add NGL specific values
set ( PROJECT_LINK_LIBS -lNGL )
link_directories( ~/NGL/lib )
include_directories(~/NGL/include/)
# as NGL uses Qt we need to define this flag
add_definitions(-DQT5BUILD)
# NGL also needs the OpenGL framework from Qt so add it
find_package(Qt5OpenGL)

# add exe and link libs this must be after the other defines
add_executable(MathLibCompare ${SOURCES})
target_link_libraries(MathLibCompare Qt5::OpenGL)
target_link_libraries(MathLibCompare ${PROJECT_LINK_LIBS} )

