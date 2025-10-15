//*Void function is written after the main function and is first declared as a function.
#include <stdio.h>
int num1, num2, max;
void enterTwoIntegers();
int maximum(int n1, int n2);
void printResult();

int main()
{
    enterTwoIntegers();
    max = maximum(num1, num2);
    printResult();
    return 0;
}
void enterTwoIntegers(){
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
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
    printf("The maximum number is: %d\n", max);
}