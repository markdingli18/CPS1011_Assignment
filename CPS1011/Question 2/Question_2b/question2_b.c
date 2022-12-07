#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "question_2b_header.h"

#define MAX 63 //Max size for String(array)
#define M1 130 //Used for showDT()
#define M2 20  //Used for showDT()

// Exit class
// Runs when memory could not be allocated
void fail(void) {
    perror("Memory could not be allocated!\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    exit(EXIT_FAILURE);}

int main(void){

    //------------------------------------------------------------------------------------------------------------------

    //initDt() Function
    printf("==============================\n");
    printf("\t   initDT()\n");
    printf("==============================\n");

    //Function Call
    DataTable_T *memory = initDT_b(); //pointer to a newly initialized DataTable structure

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //deinitDT() Function
    printf("==============================\n");
    printf("\t   deinitDT()\n");
    printf("==============================\n");

    //deinitDT() Function Call
    deinitDT_b(memory);

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //loadtDT()
    printf("==============================\n");
    printf("\t   loadDT()\n");
    printf("==============================\n\n");

    // Allocating memory
    DataTable_T *DT = (DataTable_T*) malloc(200 * sizeof(DataTable_T));
    if (DT == NULL) fail();

    // Allocating memory
    DataTable_T *buffer = (DataTable_T*) malloc(200 * sizeof(DataTable_T));
    if (buffer == NULL) fail();

    // Allocating memory for array with the same details inside to modify for sorting in mutateDT_b() function
    DataTable_T *sort_by_bmi = (DataTable_T*) malloc(100 * sizeof(DataTable_T));
    if (sort_by_bmi == NULL) fail();

    // loadDT_b() function call
    int row_count = loadDT_b(DT);

    // Copies from memory
    memcpy(&sort_by_bmi, &DT, sizeof DT);

    // Free the memory
    free(DT);
    free(buffer);

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //exportDT()
    printf("==============================\n");
    printf("\t   exportDT()\n");
    printf("==============================\n\n");

    // Allocating memory
    DT = (DataTable_T*) malloc(100 * sizeof(DataTable_T));
    if (DT == NULL) fail();

    //exportDT();
    exportDT_b(row_count, DT, "export_2.csv"); //exports to export_2.csv file

    printf("Exported to file: export_2.csv\n");

    //Free the memory
    free(DT);

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //showDT()
    printf("==============================\n");
    printf("\t   showDT()\n");
    printf("==============================\n\n");

    /* Allocating memory
    DataTable_T  line= (DataTable_T*) malloc(M1 * sizeof(DataTable_T));
    if (DT == NULL) fail();
    */

    //Declaring variables
    char line[M2][M1]; // arrays to store lines

    // showDT() function call
    row_count = showDT_b(row_count,line);

    printf("---------------------------------------------------------------------------------------------------\n\n");
     //------------------------------------------------------------------------------------------------------------------

     //projectDT()
     printf("==============================\n");
     printf("\t   projectDT()\n");
     printf("==============================\n\n");

     // Allocating memory
     line[M2][M1] = (DataTable_T *) malloc(200 * sizeof(DataTable_T));
     //if (line == NULL) fail();

     // projectDt() function call
     projectDT_b(line);

     printf("---------------------------------------------------------------------------------------------------\n\n");
     //------------------------------------------------------------------------------------------------------------------

     //mutateDT()
     printf("==============================\n");
     printf("\t   mutateDT()\n");
     printf("==============================\n\n");

    row_count ++; //increment row_count to access all data including label

    printf("This is the Data Table sorted by BMI:\n\n");
    sortByBMI_b(sort_by_bmi, row_count);
    printf("\n");

    printf("This is the Data Table sorted by First Name:\n\n");
    sortByFirstName_b(sort_by_bmi, row_count);
    printf("\n");

    printf("This is the Data Table sorted by Last Name:\n\n");
    sortByLastName_b(sort_by_bmi, row_count);
    printf("\n");
    printf("---------------------------------------------------------------------------------------------------\n\n");

} //End of main

//------------------------------------------------------------------------------------------------------------------