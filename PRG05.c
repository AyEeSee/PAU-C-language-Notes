//Program that calculates the sum of two integers entered from the keyboard
#include<stdio.h>

int main() 
{
    int num1, num2, result;
    printf("Enter two numbers separated by a space: ");  
    scanf("%d %d", &num1, &num2); // Using scanf to assign the entered values to num1 and num2
    
    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);
    return 0;   
}