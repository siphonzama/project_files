#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
do {
    /**takes in user information*/
    int weight;
    float height;

    printf("welcome to the BMI calculator:\n");
    printf("please enter your weight in KGs: \n");
    scanf("%d", &weight);

    printf("please enter your height in Meters: \n");
    scanf("%f", &height);

    /**calculates BMI*/

    float BMI;

    BMI = (weight / (float)(height * height));
    printf("Your BMI is: %f\n", BMI);

    /** defining categories of BMI*/

    if (BMI < 18.5){
        printf("your BMI is under weight\n");
    }
    else if(BMI >= 18.5 && BMI < 24.9){
        printf("your BMI is normal\n");
    }
    else if(BMI >= 25.0 && BMI < 29.9){
        printf("your BMI is overweight\n");
    }
    else if(BMI >= 30.0 && BMI < 34.9){
        printf("your BMI is obese class 1\n");
    }
    else if(BMI >= 35.0 && BMI < 39.9){
        printf("your BMI is obese class 2\n");
    }
    else if(BMI >= 40){
        printf("Your BMI is obese class 3\n");
    }
    else {
        printf("Error check you put  the right numbers:");
    }


    printf("would you like to continue? (y/n): \n");
    scanf(" %c", &choice);
}while (choice == 'Y' || choice == 'y');
printf("Thank you  for using the program: \n");

return 0;
}

