cmake_minimum_required(VERSION 3.0.0)
project(Meta_Hacker_Cup VERSION 0.1.0)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

###############################################################################
## file globbing ##############################################################
###############################################################################

# these instructions search the directory tree when CMake is 
# invoked and put all files that match the pattern in the variables
# 'sources' and 'data'
file(GLOB_RECURSE sources src/*.cpp)
file(GLOB_RECURSE main A1.cpp)
include_directories("${CMAKE_SOURCE_DIR}/src")

# you can use set(source src/main.cpp) etc if you don't want to
# use globbing to find files automatically

###############################################################################
## target definitions #########################################################
###############################################################################

# add the data to the target, so it becomes visible in IDE
add_executable(Meta_Hacker_Cup ${main} ${sources})

# just for example add some compiler flags
target_compile_options(Meta_Hacker_Cup PUBLIC -std=c++1y -Wall -Wfloat-conversion)

# this lets me include files relative to the root source directory with a <> pair
target_include_directories(Meta_Hacker_Cup PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# this copies all resource files in the build directory
# we need this, because we want to work with paths relative to the executable
file(COPY ${data} DESTINATION resources)