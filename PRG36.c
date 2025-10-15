#include <stdio.h>

const int N = 3;
int main ()
{
    int a[] = {10, 100, 200};
    int i;
    for (i = 0; i < N; i++)
    {
        printf("The value of a [%d] = %d\n", i, a[i] );
    }
    return 0;
}