#include <stdio.h>
#include <conio.h>
#include "question_2a_header.h"

//projectDT() Function
void projectDT(char line[M2][M1])
{

    //opening the csv file
    FILE *file2 = fopen("health.csv", "r");

    //if file could not be opened, return an error:
    if(file2 == NULL){
        perror("Unable to open the file!"); //Error code
    }

    int x = 5;
    int y = 10;

    //prints lines 5 to 10 (x to y)
    for (int i = x; i < y ; ++i) {
        printf("%s\n",line[i]);
    }

    //close the file
    fclose(file2);


}