#include <stdio.h>

const int N = 3;
int main()
{
    int a[] = {10, 100, 200};
    int i, *ptr[N];
    for (i = 0; i < N; i++)
    {
        ptr[i] = &a[i]; /* Addresses of integers are assigned */
    }
    for (i = 0; i < N; i++)
    {
       //! printf("a[%d]'s address = %d\n, i, *ptr[i]")
        printf("a[%d]'s value = %d\n", i, *ptr[i]);
    }
    return 0;
}