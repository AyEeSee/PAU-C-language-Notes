#include <stdio.h>

int main()
{
    int number;
    printf("Please enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input, please enter an integer \n"); // "Unvalid" yerine "Invalid" kullanıldı
        return 1; // If the input is not an integer, terminate the program.
    }

    if (number % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
    
    return 0;
}