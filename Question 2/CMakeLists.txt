cmake_minimum_required(VERSION 3.20)
project(CPS1011 C)

set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES1 Question_2a/initDT.c Question_2a/deinitDT.c Question_2a/loadDT.c Question_2a/exportDT.c Question_2a/showDT.c Question_2a/projectDT.c Question_2a/mutateDT.c Question_2a/question_2a_header.h Question_2a/question2_a.c)
set(SOURCE_FILES2 Question_2b/initDT_b.c Question_2b/deinitDT_b.c Question_2b/loadDT_b.c Question_2b/exportDT_b.c Question_2b/showDT_b.c Question_2b/projectDT_b.c Question_2b/mutateDT_b.c Question_2b/question_2b_header.h Question_2b/question2_b.c)
set(SOURCE_FILES3 Question_2a/initDT.c Question_2a/deinitDT.c Question_2a/loadDT.c Question_2a/exportDT.c Question_2a/showDT.c Question_2a/projectDT.c Question_2a/mutateDT.c Question_2c/question_2c_header.h Question_2c/question2_c.c)

add_executable(Question2_a ${SOURCE_FILES1})
add_executable(Question2_b ${SOURCE_FILES2})

set(SOURCE_FILES2 list.c)
add_library(list SHARED ${SOURCE_FILES1})

set(SOURCE_FILES3 Question_2c/question2_c.c)
add_executable(Question2_c ${SOURCE_FILES3})
target_link_libraries(Question2_c list)