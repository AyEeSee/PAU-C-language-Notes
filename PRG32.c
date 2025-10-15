#include <stdio.h>
void showElements(int [5], int);
int main (){
    int array[5] = {55, 414, 7, 210, 15};
    showElements(array, 5);
    return 0;
}
void showElements(int arrayToShow[5], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d\n", arrayToShow[i]);
    }
}