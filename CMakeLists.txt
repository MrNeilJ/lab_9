cmake_minimum_required(VERSION 3.7)
project(lab_9)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp labQueue.cpp labQueue.hpp inputCheck.cpp inputCheck.hpp menuMaker.hpp menuMaker.cpp palindrome.cpp palindrome.hpp)
add_executable(lab_9 ${SOURCE_FILES})