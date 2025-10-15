#include <stdio.h>
double factorial(int);
int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("%d! = %.0lf\n", number, factorial(number));
    return 0;
}

double factorial(int n){ // Function name corrected
    double f;
    if(n == 0 || n == 1){
        f = 1;
    } 
    else {
        f = n * factorial(n-1);
    }
    return f;
}