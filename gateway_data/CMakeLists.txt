cmake_minimum_required(VERSION 3.13)
project(gateway_data)

include(../CMakeLists.txt)
add_library(gateway_data SHARED gateway_data.cpp gateway_data.h)

include_directories(${PROJECT_DIR})
target_link_libraries(gateway_data ${PROJECT_DIR}/build/libdatafile.so)