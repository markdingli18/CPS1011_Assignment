#include <stdio.h>
#include <stdlib.h>
#include "question_2a_header.h"

//deinitDT Function

DataTable_T *deinitDT(DataTable_T *memory){

    // deallocating the memory
    free(memory);

    printf("Success!\n");

    return memory;
}