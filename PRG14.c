// A program that prints the sum and average of 5 numbers entered from the keyboard to the screen (with for).

#include <stdio.h>
#include <stdio.h>
int main()
{
    int i;
    float number, sum = 0, average;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number; // sum = sum + number;
    }
    average = sum / 5;
    printf("The sum of the entered numbers = %.2f\n", sum);
    printf("The average of the entered numbers = %.2f\n", average);
    return 0;
}


