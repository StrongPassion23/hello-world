
# set the minimum cmake version
# needs to be before project(...)
# -> set version and policy settings before the commands they may effect
cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

# create a project
project(test VERSION 1.0 LANGUAGES CXX)



# set the cpp standard
set(CMAKE_CXX_STANDARD 20)

# add source files to the variable SOURCE_FILES
set(SOURCE_FILES main.cpp)

# use SOURCE_FILES to create an executable
add_executable(test ${SOURCE_FILES})

# add a .gitignore to the build directory if not already there
if(NOT EXISTS ${PROJECT_BINARY_DIR}/.gitignore)
  file(WRITE ${PROJECT_BINARY_DIR}/.gitignore "*")
endif()