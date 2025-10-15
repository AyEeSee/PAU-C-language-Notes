#include <stdio.h>
#include <time.h>

void getSeconds(unsigned int *ptr);                       //* The function of this code line is a void function.
int main ()                                               //todo  This void function does not return a value.
{
    unsigned int sec;
    getSeconds(&sec);
    // print the actual value
    printf("number of seconds: %d\n", sec);
    return 0;
}

void getSeconds(unsigned int *ptr)
{
    // get the current number of seconds
    *ptr = time(NULL);                                 // * Value is transferred indirectly with pointer while void does not return a value.
}