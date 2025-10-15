// Program that calculates the result of 7 to the power of 5 using a recursive function

#include <stdio.h>
int power(int, int);
int main(){
    int number;
    printf("7^5 = %d\n", power(7, 5));
    return 0;
}
int power(int number, int exponent){
    int result;
    if (exponent == 0)
        result = 1;
    else
        result = number * power(number, exponent - 1);
    return result;
}