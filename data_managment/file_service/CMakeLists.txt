cmake_minimum_required(VERSION 3.13)
project(file_service)

include(../../CMakeLists.txt)
add_library(
        file_service SHARED
        ../abstract/data_interface.h
        ../abstract/data.h
        manager/file_manager.cpp
        manager/file_manager.h
)