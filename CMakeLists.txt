cmake_minimum_required (VERSION 3.0)
project (LearnCPP)

# should we use our own logger functions
option(USE_LOGGER "Use tutorial provided logger implementation" ON)

# add the binary tree to the search path for include files
include_directories ("${PROJECT_BINARY_DIR}")

if (USE_LOGGER)
    include_directories ("${PROJECT_SOURCE_DIR}/LoggerFunctions")
    add_subdirectory(LoggerFunctions)
    set (EXTRA_LIBS ${EXTRA_LIBS} LoggerFunctions)
endif ()

# add the executable
add_executable(appMain app/main.cpp)
target_link_libraries (appMain ${EXTRA_LIBS})
