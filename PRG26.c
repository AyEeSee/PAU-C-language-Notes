#include <stdio.h>
int maximum(int n1, int n2)
{
    int result;
    if (n1 > n2)
    {
        result = n1;
    }
    else
    {
        result = n2;
    }
    return result;
}

int main()
{
    int number1, number2, max;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    max = maximum(number1, number2);
    printf("Maximum number: %d\n", max);
    return 0;
}