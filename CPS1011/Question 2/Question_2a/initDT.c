#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "question_2a_header.h"

//initDT Function

DataTable_T *initDT(){

    // Allocating memory
    DataTable_T *memory= malloc(1000 * sizeof(DataTable_T));

    //if memory could not be allocated, return an error
    if(memory == NULL) {
        perror("Error! Memory not allocated.");
        printf("---------------------------------------------------------------------------------------------------\n");
    }

    else {
        printf("Success!\n");
    }

    //Returns pointer to a newly initialized DataTable structure
    return memory;

}