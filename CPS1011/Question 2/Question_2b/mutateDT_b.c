#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "question_2b_header.h"

// mutateDT() Function
void sortByBMI_b(DataTable_T sort_by_bmi[], int row_count) {
    int i, j;
    DataTable_T swap;
    for (i = 1; i < row_count - 1; i++) {
        for (j = i + 1; j < row_count; j++) {
            if (atof(sort_by_bmi[i].BMI) > atof(sort_by_bmi[j].BMI)) {
                swap = sort_by_bmi[i];
                sort_by_bmi[i] = sort_by_bmi[j];
                sort_by_bmi[j] = swap;
            }
        }
    }

    for(int c = 0; c < row_count; c++) {
        printf("%s,%s,%s,%s,%s,%s", sort_by_bmi[c].Height, sort_by_bmi[c].Weight, sort_by_bmi[c].BMI,
               sort_by_bmi[c].Name, sort_by_bmi[c].Surname, sort_by_bmi[c].Gender);
    }
}

void sortByFirstName_b(DataTable_T sort_by_bmi[], int row_count) {
    int i, j;
    DataTable_T swap;
    for (i = 1; i < row_count - 1; i++) {
        for (j = i + 1; j < row_count; j++) {
            if (strcmp(sort_by_bmi[i].Name, sort_by_bmi[j].Name) > 0) {
                swap = sort_by_bmi[i];
                sort_by_bmi[i] = sort_by_bmi[j];
                sort_by_bmi[j] = swap;
            }
        }
    }

    for(int c = 0; c < row_count; c++) {
        printf("%s,%s,%s,%s,%s,%s", sort_by_bmi[c].Height, sort_by_bmi[c].Weight, sort_by_bmi[c].BMI,
               sort_by_bmi[c].Name, sort_by_bmi[c].Surname, sort_by_bmi[c].Gender);
    }
}

void sortByLastName_b(DataTable_T sort_by_bmi[], int row_count) {
    int i, j;
    DataTable_T swap;
    for (i = 1; i < row_count - 1; i++) {
        for (j = i + 1; j < row_count; j++) {
            if (strcmp(sort_by_bmi[i].Surname, sort_by_bmi[j].Surname) > 0) {
                swap = sort_by_bmi[i];
                sort_by_bmi[i] = sort_by_bmi[j];
                sort_by_bmi[j] = swap;
            }
        }
    }

    for(int c = 0; c < row_count; c++) {
        printf("%s,%s,%s,%s,%s,%s", sort_by_bmi[c].Height, sort_by_bmi[c].Weight, sort_by_bmi[c].BMI,
               sort_by_bmi[c].Name, sort_by_bmi[c].Surname, sort_by_bmi[c].Gender);
    }
}

//------------------------------------------------------------------------------------------------------------------
