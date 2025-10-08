// Program that calculates the factorial of a number entered from the keyboard - with for

#include <stdio.h>

int main(){
    int number, i;
    double factorial;
    do {
        printf("Enter a number to calculate its factorial: ");
        scanf("%d", &number);
        if (number < 0){
            printf("Please enter a positive integer...\n");
        }

    } while(number < 0);
    if (number == 0 || number == 1){
        factorial = 1;
    }
    else{
        factorial = 1;
        for (i = 2; i <= number; i++){
            factorial *= i; // factorial = factorial * i;
        }
    }
    printf("%d! = %.0f\n", number, factorial);
    return 0;
}
