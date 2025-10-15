#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int *random();
int main()
{
    int *p, i;
    p = random(); // Function returning pointer is called correctly.
    for (i = 0; i < 10; i++)
    {
        printf("*(p + %d) : %d\n", i, *(p + i));
    }
    return 0;
}

int *random()
{
    static int r[10];
    int i;
    srand(time(NULL));                                                          //* The reason for using time function is to make rand command work more effectively
    for (i = 0; i < 10; ++i)                                                    //* With time function, rand command changes constantly depending on the seconds passed on the computer.
    {
        r[i] = 100 + rand() % 101;
        printf("r[%d] = %d\n", i, r[i]);
    }
    return r; // Return statement inside the function
}