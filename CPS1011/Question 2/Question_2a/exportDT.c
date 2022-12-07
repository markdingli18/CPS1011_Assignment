#include <stdio.h>
#include <conio.h>
#include "question_2a_header.h"

//ExportDT() Function
int exportDT(int count, struct DataTable_T const *data, char const *fileName)
{
    //Open the file in write mode
    FILE *f=fopen(fileName,"w");
    if (f == NULL) {
        perror("Unable to open the file!"); //Error code
        return 1;
    }

    //Exporting content of DataTable_T
    for (int i=0; i<count; i++)
    {
        fprintf(f,"%s,%s,%s,%s,%s,%s",  data[i].Height, data[i].Weight, data[i].BMI, data[i].Name, data[i].Surname, data[i].Gender);
    }

    printf("Exported to file - export_1.csv!\n");

    //Close the file
    fclose(f);
    return 0;
}
