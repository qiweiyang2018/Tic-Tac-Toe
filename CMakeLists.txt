cmake_minimum_required(VERSION 3.13)
project(ttt)

set(CMAKE_CXX_STANDARD 14)

add_executable(ttt main.cpp board.h Agent.h ai.cpp gameManager.h)