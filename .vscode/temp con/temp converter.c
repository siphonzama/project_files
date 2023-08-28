#include <stdio.h>
#include <stdlib.h>
/**
 * a program that converts temperature from Celsius  to Fahrenheit */

/** choice: give option to pick the convertion type*/
int main()
{
    int choice;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    /** num: takes user input to be converted */
    int num;

    printf("please enter a number that is temperature: ");
    scanf("%d", &num);
    
    /** new_temp: function to convert num to a new temperature */
    int new_temp;

     if (choice == 1) {
         new_temp = ((num * 9/5) + 32);
    } else if (choice == 2) {
       new_temp = ((num - 32) * 5/9);
    } else {
        printf("Invalid choice.\n");
    }
<<<<<<< HEAD:.vscode/temp con/temp converter.c
    
=======
>>>>>>> 21cfe07f2997682cfabd379966c1fb173e815cf9:temp converter.c
    return 0;
}
