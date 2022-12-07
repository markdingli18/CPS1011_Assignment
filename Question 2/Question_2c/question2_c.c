#include <stdio.h>
#include <string.h>
#include "question_2c_header.h"

#define MAX 63 //Max size for String(array)
#define M1 130 //Used for showDT()
#define M2 20  //Used for showDT()

int main(){

    //------------------------------------------------------------------------------------------------------------------

    //initDt() Function
    printf("==============================\n");
    printf("\t   initDT()\n");
    printf("==============================\n");

    //initDT() Function Call
    DataTable_T *memory = initDT(); //pointer to a newly initialized DataTable structure

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //deinitDT() Function
    printf("==============================\n");
    printf("\t   deinitDT()\n");
    printf("==============================\n");

    // deinitDT() Function Call
    deinitDT(memory);

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //loadtDT()
    printf("==============================\n");
    printf("\t   loadDT()\n");
    printf("==============================\n\n");

    DataTable_T DT[100];

    // Create array with the same details inside to modify for sorting
    DataTable_T sort_by_bmi[100];

    // loadDT() Function call
    int row_count = loadDT(DT);

    // Copies from memory
    memcpy(&sort_by_bmi, &DT, sizeof DT);

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //exportDT()
    printf("==============================\n");
    printf("\t   exportDT()\n");
    printf("==============================\n\n");

    //exportDT() function call
    exportDT(row_count, DT, "export_3.csv"); //exports to export_3.csv file

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //showDT()
    printf("==============================\n");
    printf("\t   showDT()\n");
    printf("==============================\n\n");

    //Declaring variables
    char line[M2][M1]; // arrays to store lines

    // showDT() function call
    row_count = showDT(row_count,line);

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //projectDT()
    printf("==============================\n");
    printf("\t   projectDT()\n");
    printf("==============================\n\n");

    // projectDt() function call
    projectDT(line);

    printf("---------------------------------------------------------------------------------------------------\n\n");
    //------------------------------------------------------------------------------------------------------------------

    //mutateDT()
    printf("==============================\n");
    printf("\t   mutateDT()\n");
    printf("==============================\n\n");

    row_count ++; //increment row_count to access all data including label

    printf("This is the Data Table sorted by BMI:\n\n");
    sortByBMI(sort_by_bmi, row_count);
    printf("\n");

    printf("This is the Data Table sorted by First Name:\n\n");
    sortByFirstName(sort_by_bmi, row_count);
    printf("\n");

    printf("This is the Data Table sorted by Last Name:\n\n");
    sortByLastName(sort_by_bmi, row_count);
    printf("\n");

    printf("---------------------------------------------------------------------------------------------------\n\n");

} //End of main
//------------------------------------------------------------------------------------------------------------------