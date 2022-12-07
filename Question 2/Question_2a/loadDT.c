#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "question_2a_header.h"

//ExportDT() Function
int loadDT(DataTable_T DT[])
{
    //open the file
    FILE* file = fopen("health.csv", "r");

    if (file == NULL) {
        perror("Unable to open the file!"); //Error code
        return 1;
    }

    int row_count = 0; //Holds the number of rows

    char * pointer;
    char buffer[200];

    while (!feof(file))  //While NOT at the end of the file
    {
        fgets(buffer, 200, file); //read line
        pointer = strtok(buffer, ",");

        if (!feof(file)) {
            strcpy((char *) DT[row_count].Height, pointer);
            pointer = strtok(NULL, ",");
            strcpy((char *) DT[row_count].Weight, pointer);
            pointer = strtok(NULL, ",");
            strcpy((char *) DT[row_count].BMI, pointer);
            pointer = strtok(NULL, ",");
            strcpy(DT[row_count].Name, pointer);
            pointer = strtok(NULL, ",");
            strcpy(DT[row_count].Surname, pointer);
            pointer = strtok(NULL, ",");
            strcpy(DT[row_count].Gender, pointer);

            //For testing to see if data was loaded, remove comment below:
            //printf("%s,%s,%s,%s,%s,%s", DT[row_count].Height, DT[row_count].Weight, DT[row_count].BMI, DT[row_count].Name, DT[row_count].Surname, DT[row_count].Gender);

            //Increment row_count
            row_count++;
        }

    }

    printf("Success!\n");

    // Close file
    fclose(file);

    //Return number of rows
    return row_count;
}
