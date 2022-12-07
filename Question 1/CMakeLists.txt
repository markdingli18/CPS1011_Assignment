cmake_minimum_required(VERSION 3.20)
project(CPS1011 C)

set(CMAKE_C_STANDARD 99)

add_executable(Question1_b init_array.c display.c reverse.c frequency.c display_freq.c question_1_header.h question1_b.c)
