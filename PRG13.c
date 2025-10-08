/* A program that makes the program write the sum of 
integers between 1 and the number entered from the 
keyboard (using for) to the screen.*/

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    { 
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}


