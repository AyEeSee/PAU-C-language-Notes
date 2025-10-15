#include <stdio.h>
int main(){
    int val1;
    char val2[10] = {'P', 'A', 'U'};
    int *val1ptr;
    char *val2ptr;
    val1ptr = &val1;
    val2ptr = val2; // The name of the array contains the address of its first element
    val1 = 15;

    printf("val1 = %d\n", val1); // Accessing the variable content directly
    printf("val1 = %d\n", *val1ptr);

    *val1ptr = 20;
    printf("val1 = %d\n", val1);
    printf("The first character of the val2 string = %c\n", val2[0]);
    printf("Value 1's address is: %p\n", &val1); // Address representation in pointer type
    printf("Value 2's address is: %p\n", &val2);

    // printf("val1's address is : %x\n", &val1); --- Removes leading zeros, so we cannot determine the system's bit size.
    // printf("val2's address is: %x\n", &val2);

    return 0;
}