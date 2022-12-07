//question 1. iii)

#include <stdio.h>

//reverse function
void reverse(int arr[], int rev[], int sum){

    // Print the array elements
    printf("Array Elements before swapping: ");
    for (int i = 0; i < sum; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n---------------------------------------------------------------------------------------------------\n");

    //----------------------------------------------------------------------------------------------------------------

    //swapping logic
    for (int i = 0; i < sum; i++) {
        rev[sum - 1 - i] = arr[i];
    }

    for (int i = 0; i < sum; i++) {
        arr[i] = rev[i];
    }

    //----------------------------------------------------------------------------------------------------------------

    //printing elements of the 1st array after swapping
    printf("The array elements after swapping are: ");
    for (int i = 0; i < sum; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n---------------------------------------------------------------------------------------------------\n");

    //----------------------------------------------------------------------------------------------------------------

}