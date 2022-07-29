
# set name, version, language of the project
project(mylibrary VERSION 1.0 LANGUAGES CXX)

# creates a .a or .lib file
add_library(${PROJECT_NAME} src/lib.cpp)

# Define headers for this library. PUBLIC headers are used for
# compiling the library, and will be added to consumers' build paths.
# myapp.cpp can use #include "mylibrary/mylibrary.h"
target_include_directories(${PROJECT_NAME} PUBLIC
 $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
 $<INSTALL_INTERFACE:include>
 PRIVATE src)

# Zusätzliche Eigenschaften angeben, die der Compiler besitzen muss
# ansonsten zeigt CMake einen Fehler an
# Compiler muss auto Typ unterstützen
# Compiler muss Variadic Templates unterstützen
target_compile_features(${PROJECT_NAME}
 PUBLIC cxx_auto_type
 PRIVATE cxx_variadic_templates)

# Enables testing for this directory and below.
# command should also be in the source directory CMakeLists.txt
enable_testing()

# adds a subdirectory and immediately starts executing
# the CMakeLists.txt file that is included in there
add_subdirectory(test)

