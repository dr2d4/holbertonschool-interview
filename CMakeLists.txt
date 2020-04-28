cmake_minimum_required(VERSION 3.16)
project(holbertonschool_interview C)

set(CMAKE_C_STANDARD 11)

include_directories(0x01-insert_in_sorted_linked_list)

add_executable(holbertonschool_interview
        0x01-insert_in_sorted_linked_list/0-insert_number.c
        0x01-insert_in_sorted_linked_list/linked_lists.c
        0x01-insert_in_sorted_linked_list/lists.h
        0x01-insert_in_sorted_linked_list/main.c)
