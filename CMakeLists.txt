cmake_minimum_required(VERSION 3.27)
project(linked_list C)
set(CMAKE_C_STANDARD 11)
include_directories(.)
add_executable(linked_list
        linked_list.c
        main.c
        linked_list.h
        linked_stack.h
        linked_stack.c
        linked_queue_list.h
        linked_queue_list.c
        linked_queue.h
        linked_queue.c
        list_based_array.h
        list_based_array.c
        stack.h
        stack.c
        queue.h
        queue.c)
