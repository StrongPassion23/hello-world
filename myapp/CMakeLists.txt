# set name, version, language of the project
project(myapp VERSION 0.1 LANGUAGES CXX)

# show the output of the makefiles
set(CMAKE_VERBOSE_MAKEFILE ON)

# Define the executable
add_executable(${PROJECT_NAME} src/myapp.cpp)

# c++ std 17
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

# link the libraries this project depends upon
target_link_libraries(${PROJECT_NAME} mylibrary)

