#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "question_2b_header.h"

//initDT Function
DataTable_T *initDT_b(){

    DataTable_T *memory= malloc(1000 * sizeof(DataTable_T));

    printf("Success!\n");

    //if memory could not be allocated, return an error
    if(memory == NULL) {
        perror("Error! Memory not allocated.");
        printf("---------------------------------------------------------------------------------------------------\n");
    }

    //Returns pointer to a newly initialized DataTable structure
    return memory;

}