cmake_minimum_required(VERSION 3.2)
if(DEFINED ENV{NGLDIR})
    message("found define NGLDIR as " $ENV{NGLDIR})
    set(NGLROOT $ENV{NGLDIR})
elseif(NOT DEFINED ENV{NGLDIR})
    #$ENV{HOME} gives you backslashes on windows so default to C drive root
    if(WIN32)
        file (TO_CMAKE_PATH $ENV{HOMEDRIVE}/$ENV{HOMEPATH}/NGL NGLROOT)
		message("setting NGLROOT to " ${NGLROOT})
		set(CMAKE_TOOLCHAIN_FILE "$ENV{HOMEDRIVE}/$ENV{HOMEPATH}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
		set(CMAKE_GENERATOR_PLATFORM x64)
	
	else()
        message("setting NGLROOT to " $ENV{HOME}/NGL/)
        set(NGLROOT $ENV{HOME}/NGL/)
    endif()
endif()
link_directories( $ENV{HOME}/NGL/lib )

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

#Bring the headers into the project (local ones)
include_directories(include ${NGLROOT}/include ${NGLROOT}/gl3w ${NGLROOT}/include/fmt )
add_definitions(-DUSEGLM -DGLM_ENABLE_EXPERIMENTAL)
# define this if you want to include the stanford data sets
# these are very big and make compilation time huge
add_definitions(-DADDLARGEMODELS)
#This defines the image lib to use by default use QIMAGE, I need to fix this for the others
add_definitions(-DUSEOIIO)
#This defines that we are using the header only version of the fmt lib
add_definitions(-DFMT_HEADER_ONLY)
add_definitions(-DUSEGLM)
add_definitions(-DGLM_ENABLE_EXPERIMENTAL)

#the file(GLOB...) allows for wildcard additions of our src dir
set(SOURCES 
			${PROJECT_SOURCE_DIR}/Vec4Mat4.cpp  
)

# see what platform we are on and set platform defines
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
	message("Mac build")
	find_library(MACGL OpenGL)
	set ( PROJECT_LINK_LIBS -lNGL ${MACGL})

elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
	set ( PROJECT_LINK_LIBS -L/home/jmacey/NGL/lib -lNGL -lGL -lpthread )
endif()


# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)


if(WIN32)
    #Not defined in msvc compiler for cmaths so must set definition manually here
    add_definitions(-D_USE_MATH_DEFINES)

    add_definitions(-DNOMINMAX)
    add_definitions(-DNO_DLL)
else()
    #Not a defined option for msvc - fine for gcc and clang
    set(CMAKE_CXX_FLAGS "-Wno-register")
		set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -g")
endif()


# now add NGL specific values
# add exe and link libs that must be after the other defines
add_executable(Vec4Mat4 ${SOURCES})

link_directories( ${NGLROOT}/lib )
find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(Vec4Mat4 PRIVATE glfw PRIVATE GTest::gtest Qt5::Widgets )
target_link_libraries(Vec4Mat4 PRIVATE OpenImageIO::OpenImageIO OpenImageIO::OpenImageIO_Util)

# see what platform we are on and set platform defines
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
     message("Doing mac OpenGL")
		 find_library(MACGL OpenGL)
		 add_definitions(-DGL_SILENCE_DEPRECATION)
    set(EXTRALIBS  ${MACGL})
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
endif()


if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	target_link_libraries( Vec4Mat4 PRIVATE  $(HOMEDRIVE)\\$(HOMEPATH)\\NGL\\lib\\NGL.lib )
else()
target_link_libraries(Vec4Mat4 PRIVATE  NGL PRIVATE ${EXTRALIBS} )

endif()
