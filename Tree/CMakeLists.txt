cmake_minimum_required(VERSION 3.17)
project(Tree C)

set(CMAKE_C_STANDARD 99)

add_executable(Tree main.c Tree.h Tree.c TreeNode.h TreeNode.c queue.h queue.c)