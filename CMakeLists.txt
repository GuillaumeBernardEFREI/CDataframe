cmake_minimum_required(VERSION 3.27)
project(CDataframe C)

set(CMAKE_C_STANDARD 11)

add_executable(CDataframe main.c
        column.c
        column.h
        list.c
        list.h
        cdataframe.c
        cdataframe.h
        main2.c
)
