cmake_minimum_required(VERSION 3.13)
project(main)

include(../CMakeLists.txt)
add_executable(main main.cpp)

include_directories(${PROJECT_DIR}/data_managment/gateway_data)
target_link_libraries(main ${PROJECT_DIR}/build/libgateway_data.so)