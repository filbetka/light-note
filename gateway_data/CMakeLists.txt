cmake_minimum_required(VERSION 3.13)
project(gateway_data)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_DIR /home/lisek/workspace/light-note)

add_library(gateway_data SHARED gateway_data.cpp gateway_data.h)

include_directories(${PROJECT_DIR}/datafile)
target_link_libraries(gateway_data ${PROJECT_DIR}/datafile/cmake-build-release/libdatafile.so)