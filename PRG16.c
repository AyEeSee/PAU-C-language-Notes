// Calculating the product of integers between 1 and n (with while)
// * Equals the factorial operation.
#include <stdio.h>
int main()
{
    int i = 1, product = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n)
    {
        product *= i; // product = product * i;
        i++;
    }
    printf("The product of numbers between 1 and %d = %d\n", n, product);
    return 0;
}