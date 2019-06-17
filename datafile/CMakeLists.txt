cmake_minimum_required(VERSION 3.13)
project(datafile)

include(../CMakeLists.txt)
add_library(datafile SHARED datafile.cpp datafile.h)