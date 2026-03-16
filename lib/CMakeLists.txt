add_library(math_lib STATIC math_lib.cpp)

target_include_directories(math_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})