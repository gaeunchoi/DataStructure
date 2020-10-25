cmake_minimum_required(VERSION 3.17)
project(MidTerm C)

set(CMAKE_C_STANDARD 99)

add_executable(MidTerm main.c User.c User.h queue.c queue.h mainQueue.c mainQueue.h)