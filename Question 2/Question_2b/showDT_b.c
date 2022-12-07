#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "question_2b_header.h"

int showDT_b(int row_count, char line[M2][M1])
{
    int k = 0;         // array counter
    FILE *fdpo = NULL;

    //opening the csv file
    fdpo = fopen("health.csv", "r");
    //if file could not be opened, return an error:
    if(fdpo == NULL){
        perror("Unable to open the file!"); //Error code
        return 1;
    }

    //Gets the first line (labels)
    while(fgets(line[k],M1,fdpo))
    {
        line[k][strlen(line[k])-1]='\0';
        k++;
    }

    //prints labels and first 10 lines
    for (k = 0; k < 11 ; ++k) {
        printf("%s\n",line[k]);
    }
    printf(".....................................................................................\n");

    //Decrementing row_count to get last row
    row_count--;

    //Printing the last line
    printf("%s\n",line[row_count]);

    //Closes file
    fclose(fdpo);

    //Return the number of rows
    return row_count;
}