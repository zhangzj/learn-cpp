cmake_minimum_required (VERSION 3.0)
project (LearnCPP)

set(SOURCES main.cpp application.cpp)

add_library(logger logger.cpp)
add_executable(main ${SOURCES})
target_link_libraries (main logger)
