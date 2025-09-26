//Klavyeden girilien tamsayının toplamını bulan program 
#include<stdio.h>

int main() 
{
    int number1, number2, result;
    printf("Please input the 1st number: ");  
    scanf("%d", &number1);                         //scanf fonksiyonu ile klavyeden girilen değeri sayi1 değişkenine atadık

    printf("Please input the 2nd number: ");  
    scanf("%d", &number2);                         //scanf fonksiyonu ile klavyeden girilen değeri sayi2 değişkenine atadık
   
    result = number1 + number2,                      
    printf("%d + %d = %d\n", number1, number2, result);
    
    getchar();
    



    
    return 0;   

}