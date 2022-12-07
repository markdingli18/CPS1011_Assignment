//question 1. i)

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAXSIZE 200

//init_array function
int init_array(int arr[]){

    int count = 0;     // Stores the index where the element is to be inserted
    bool exit = false; // Flag

    printf("Enter the array elements (Press q to quit):\n");

    // while loop
    while (exit == false && count < MAXSIZE) {

        //inputting elements into the array
        scanf("%d", &arr[count]);

        if  (tolower(getchar()) == 'q') {

            exit = true;

        }

        else {

         count ++;

        }

        //--------------------------------------------------------------------------------------------------------------

        //Error message for max size
        if (count == MAXSIZE){

            printf("---------------------------------------------------------------------------------------------------\n");
            printf("You have reached largest possible size!\n");

        }

        else {

            continue;

        }

        //--------------------------------------------------------------------------------------------------------------

    } //End of while loop

    // Print the array elements
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("Array Elements: ");
    for (int i = 0; i < count; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n---------------------------------------------------------------------------------------------------\n");

    return count;

}