#include <stdio.h>
const int N = 3;
int main (){
    int array[] = {10, 100, 200};
    int i, *ptr;
    ptr = array; // The address of the array is assigned to the pointer.
    for (i = 0; i < N; i++){

//  printf("array[%d]'s address = %p\n", i, ptr);
//  printf("array[%d]'s content = %d\n", i, *ptr);
    printf("array[%d] = %d\n", i, array[i]);
    printf("array[%d] = %d\n", i, *(ptr + i));
//  ptr++; // move to the next address
    }   
    
    return 0;
}
