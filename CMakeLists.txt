cmake_minimum_required(VERSION 3.24)
project(HelloCmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
 
include(cmake/dependencies.cmake)
add_subdirectory(lib)
add_subdirectory(src)