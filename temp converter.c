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
    {
    printf("your temperature is: %d\n", new_temp);

      printf("Do you want to convert another temperature? (y/n): ");
        scanf(" %c", &again); // Notice the space before %c to consume the newline character

    } while (again == 'y' || again == 'Y');

    printf("Goodbye!\n");

    return 0;
}
