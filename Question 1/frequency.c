//question 1. iv)

#include <stdio.h>

//frequency function
void frequency(int arr[], int freq[], int sum)
{

    int visited = -1;

    //Calculating frequency
    for(int i = 0; i < sum; i++) {
        int count = 1;
        for (int j = i + 1; j < sum; j++) {
            if (arr[i] == arr[j]) {
                count++;
                //To avoid counting same element again
                freq[j] = visited;
            }
        }
        if (freq[i] != visited)
            freq[i] = count;
    }

    //Printing frequency of each element
    printf("{");
    for(int i=0; i<sum; i++){

        if(freq[i] != visited)
        {
            printf("{%d,%d},", arr[i], freq[i]);
        }
    }
    printf("}\n");
    printf("---------------------------------------------------------------------------------------------------\n");
}