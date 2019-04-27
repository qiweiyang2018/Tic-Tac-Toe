cmake_minimum_required(VERSION 3.13)
project(tic-tac-toe)

set(CMAKE_CXX_STANDARD 14)

add_executable(tic-tac-toe main.cpp board.h Agent.h agent.cpp board.cpp)