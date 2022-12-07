//question 1. ii)

#include <stdio.h>

//display function
void display(int arr[], int sum)
{

    //printing elements of the array
    printf("\n{\n  \"array\": [\n");
    for (int i = 0; i < sum; i++) {
        printf("     {\n        \"offset\": \"%d\",\n        \"value\": \"%d\"\n      },\n\n",i, arr[i]);
    }
    printf("  ]\n}");

    printf("\n\n---------------------------------------------------------------------------------------------------\n");
}