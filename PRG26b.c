#include <stdio.h>
int number1, number2, max;

void enterTwoIntegers() {
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
}

int maximum(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

void printResult()
{
    printf("Maximum number: %d\n", max);
}

int main()
{
    enterTwoIntegers();
    max = maximum(number1, number2);
    printResult();
    return 0;
}