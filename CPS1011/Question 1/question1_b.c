#include <stdio.h>
#include <conio.h>
#include "question_1_header.h"
#define MAXSIZE 200

int main()
{
    /*Variable Declarations*/
    int arr[MAXSIZE];       //Initializing the array
    int freq[MAXSIZE];      //Initializing frequency array
    int rev[MAXSIZE];       //Initializing reverse array
    int choice;             //User's Choice
    int sum;                //Size of array
    int visited = -1;

    do
    {

        printf("==============================\n");
        printf("\t    MENU\n");
        printf("==============================\n");
        printf("1. init_array()\n");
        printf("2. display()\n");
        printf("3. reverse()\n");
        printf("4. frequency()\n");
        printf("5. display_freq()\n");
        printf("6. Quit \n\n");
        printf("Enter Choice:");
        scanf("%d", &choice);
        fflush(stdin); //clears buffer
        printf("---------------------------------------------------------------------------------------------------\n");

            switch (choice) {

                case 1:
                    //init_array function call
                    sum = init_array(arr);
                    printf("Size of array: %d\n", sum);
                    printf("---------------------------------------------------------------------------------------------------\n");
                    printf("Press any key to continue....\n");
                    getch();
                    break;

                case 2:
                    //display function call
                    display(arr, sum);
                    printf("Press any key to continue....\n");
                    getch();
                    break;

                case 3:
                    //reverse function call
                    reverse(arr, rev, sum);
                    printf("Press any key to continue....\n");
                    getch();
                    break;

                case 4:
                    //frequency function call
                    frequency(arr, freq, sum);
                    printf("Press any key to continue....\n");
                    getch();
                    break;

                case 5:
                    //display_freq function call
                    display_freq(arr, freq, sum, visited);
                    printf("Press any key to continue....\n");
                    getch();
                    break;

                case 6:
                    //Quit
                    printf("\t\t\t===================================\n");
                    printf("\t\t\t   Thank you for using the menu!\n");
                    printf("\t\t\t===================================\n");
                    break;

                default:
                    printf("Invalid choice!\nPlease enter a choice between 1 and 6!\n");
            }

    }while(choice != 6);  //Repeat menu till quit option

} //End of main