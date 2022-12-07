#include <stdio.h>
#include <conio.h>
#include "question_2b_header.h"

//ExportDT() Function
int exportDT_b(int count, struct DataTable_T const *data, char const *fileName)
{
    FILE *f=fopen(fileName,"w");
    if(f==NULL) return -1;
    for (int i=0; i<count; i++)
    {
        fprintf(f,"%s,%s,%s,%s,%s,%s",  data[i].Height, data[i].Weight, data[i].BMI, data[i].Name, data[i].Surname, data[i].Gender);
    }
    fclose(f);
    return 0;
}