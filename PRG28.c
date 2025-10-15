// Prototype: int kareal(int). Write a program to calculate the sum 1^2 + 2^2 + 3^2 + ... + n^2.    //!int kareal(int)
// n*(n+1)*(2*n+1)/6

#include <stdio.h>
int n;
void enterInteger();
int kareal(int n)
{
    return n*(n+1)*(2*n+1)/6;
}

int main()
{
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Result: %d\n", kareal(n));
    return 0;
}


void enterInteger()
{
    printf("Enter a number: ");
    scanf("%d", &n);
}


/* Teacher's Correct Solution:

#include <stdio.h>
int square(int);
int main()
{
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += square(i);
    }
    printf("Result: %d\n", sum);
    return 0;
}
int square(int x)
{
    return x * x;
}

*/
