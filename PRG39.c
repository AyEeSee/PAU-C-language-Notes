#include <stdio.h>
double getAverage( int*, int);
int main ()
{
    int numbers[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage(numbers, 5);
    printf("Average value: %lf\n", avg);
    return 0;
}

double getAverage(int *array, int n)
{
    int i, sum = 0;
    double avg;
    for (i = 0; i < n; ++i)
    {
        sum += array[i];
    }
    avg = (double)sum/n;
    return avg;
}
