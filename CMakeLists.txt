cmake_minimum_required(VERSION 3.23)
project(Bytecode_Virtual_Machine C)

set(CMAKE_C_STANDARD 11)

add_executable(Bytecode_Virtual_Machine main.c common.c common.h chunk.c chunk.h memory.c memory.h debug.c debug.h value.c value.h vm.c vm.h)
