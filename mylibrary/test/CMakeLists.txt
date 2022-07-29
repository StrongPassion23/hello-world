set(CPP_EXEC_NAME "test_mylib_pass") # set the name of .cpp
# the executable will have the same name, unless changed
add_executable(${CPP_EXEC_NAME} ${CPP_EXEC_NAME}.cpp)
# c++ std 17
set_target_properties(${CPP_EXEC_NAME} PROPERTIES CXX_STANDARD 17)    
# add preprozessor define only for this target
#target_compile_definitions(${CPP_EXEC_NAME} PRIVATE <NAME>=<VALUE>)
# link mylibrary to the project
target_link_libraries(${CPP_EXEC_NAME} ${PROJECT_NAME})
# add Unittest with -V to show output
add_test(NAME ${CPP_EXEC_NAME} COMMAND ${CPP_EXEC_NAME} -V)
# install ressources the test needs to the build directory
# ${CMAKE_CURRENT_BINARY_DIR} - Directory where the binary is placed
#install(DIRECTORY <DIRECTORY_TO_COPY> DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
unset(${CPP_EXEC_NAME}) # unset the variable so it can be used again