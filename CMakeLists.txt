cmake_minimum_required(VERSION 3.21)
project(Portfolio_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Portfolio_Project main.cpp Bank.cpp Bank.h Person.cpp Person.h File.cpp File.h)
