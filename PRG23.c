#include <stdio.h>

int main(){
    int notes[2][5] = {{80,70,65,89,90},{85,80,82,87}}, result;
    float avg;
    int i, j;
    for (i = 0; i < 2 ; i++){
        result = 0;
        for (j = 0; j < 5 ; j++){
            result += notes [i][j];
        
        }
        avg = (float)result / j;
        printf("%d. Student's gpa = %.2f\n", i + 1, avg);

    }
    return 0;
}