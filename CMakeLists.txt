cmake_minimum_required (VERSION 3.0)
project (LearnCPP)

add_library(logger logger.cpp)
add_executable(main main.cpp)
target_link_libraries (main logger)
