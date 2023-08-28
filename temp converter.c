#include <stdio.h>
#include <stdlib.h>
/**
 * a program that converts temperature from Celsius  to Fahrenheit */
int main()
{
    int choice;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    int num;

    printf("please enter a number that is temperature: ");
    scanf("%d", &num);

    int new_temp;

     if (choice == 1) {
         new_temp = ((num * 9/5) + 32);
    } else if (choice == 2) {
       new_temp = ((num - 32) * 5/9);
    } else {
        printf("Invalid choice.\n");
    }
    printf("your temperature is: %d\n", new_temp);

    return 0;
}
