cmake_minimum_required(VERSION 3.0)
project(MyProject)

# Add the library target
add_library(netc STATIC netC/net.c netC/net.h)

# Add the test executable
add_executable(test_program test.c)

# Link the test executable with the library
target_link_libraries(test_program PRIVATE netc)
