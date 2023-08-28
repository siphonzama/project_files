#include <stdio.h>

/**A basic Currency Converter that will change U$D(Dollar) to ZAR(Rand)*/
int main()
{
    char choice;
    /**Gets the information on which way to convert*/
do{
    int currency;
    int num;

    printf("Currency Converter\n");
    printf("1.Rand to Dollar\n");
    printf("2.Dollar to Rand\n");
    printf("pick a way to convert: ");
    scanf("%d", &currency);

/**Takes the number to be converted*/

    printf("Enter your amount: ");
    scanf("%d", &num);
    
/**Conversion methods*/
    int new_num;

    if (currency == 1){
        new_num = num * 0.053;
    }
    else if (currency == 2){
        new_num = num * 18.70;
    }
    else{
        printf("not an option");
        continue;
        }
    printf("Converted amount: %d\n", new_num);

/**sees if the choice runs again or ends program*/

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

} while (choice == 'Y' || choice == 'y');

    printf("thank you for using the program.\n");

    return 0;
}
