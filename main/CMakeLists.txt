cmake_minimum_required(VERSION 3.13)
project(main)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_DIR /home/lisek/workspace/light-note)

add_executable(main main.cpp)

include_directories(${PROJECT_DIR}/gateway_data)
target_link_libraries(main ${PROJECT_DIR}/gateway_data/cmake-build-release/libgateway_data.so)