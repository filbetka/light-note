cmake_minimum_required(VERSION 3.13)
project(tests)

include(../../CMakeLists.txt)
add_executable(tests example.cpp)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${PROJECT_DIR}/data_managment/gateway_data)
target_link_libraries(tests ${PROJECT_DIR}/build/libgateway_data.so)
target_link_libraries(tests ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})