// Program that calculates the sum of odd and even numbers between 1 and n - with for

#include <stdio.h>
int main(){
    int n, i, oddSum = 0, evenSum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        if (i % 2 == 1){
            oddSum += i;
        }
        else{
            evenSum += i;
        }
    }
    printf("The sum of odd numbers between 1 and %d = %d\n", n, oddSum);
    printf("The sum of even numbers between 1 and %d = %d\n", n, evenSum);
    return 0;
}