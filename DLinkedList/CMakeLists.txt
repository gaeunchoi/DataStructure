cmake_minimum_required(VERSION 3.17)
project(DLinkedList C)

set(CMAKE_C_STANDARD 99)

add_executable(DLinkedList main.c dlinkedlist.c dlinkedlist.h stack.h stack.c)