cmake_minimum_required(VERSION 3.5)

project(Dqueue)

set(CMAKE_SHARED_LIBRARY_PREFIX "")

add_library(dqueue SHARED ./src/dqueue.c)