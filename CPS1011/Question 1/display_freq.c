//question 1. v)

#include <stdio.h>

//display_frequency function
void display_freq(int arr[], int freq[], int sum, int visited){

    //Print frequency of each element
    printf("Frequency of all the elements inside the array : \n");
    for(int i=0; i<sum; i++)
    {
        if(freq[i] != visited)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    printf("---------------------------------------------------------------------------------------------------\n");

    //Printing frequency similar to 1) a) ii)
    printf("\n{\n  \"frequency\": [\n");
    for(int i=0; i<sum; i++){

        if(freq[i] != visited)
        {
            printf("     {\n        \"number\": \"%d\",\n        \"frequency\": \"%d\"\n      },\n\n",arr[i], freq[i]);
        }
    }
    printf("  ]\n}");

    printf("\n\n---------------------------------------------------------------------------------------------------\n");

}