#include <stdio.h>
#include <stdlib.h> // Enables commands like rand and srand.
#include <time.h>   //

int main(){
    int number;
    srand(time(NULL));
    number = 100 + rand() % 51; //Takes a random value between 100 and 150.             //* The range of the value in rand function can be determined by MOD operation.
    printf("Random number: %d\n", number);
    return 0;

}