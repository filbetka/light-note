cmake_minimum_required(VERSION 3.13)
project(datafile)

set(CMAKE_CXX_STANDARD 17)

add_library(datafile SHARED datafile.cpp datafile.h)