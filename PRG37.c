#include <stdio.h>
const int N = 4;
int main()
{
    char *names[] = {"Ali Veli", "Ayse Gunes", "Nuri Can", "Seda Koc"};
    int i = 0;
    for (i = 0; i <N; i++)
    {
        printf("names[%d] = %s\n", i, names[i]);
    }
    return 0;
}