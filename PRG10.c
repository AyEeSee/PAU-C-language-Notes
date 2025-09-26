//Klavyeden girilien tamsayının toplamını bulan program 
#include<stdio.h>

int main() 
{
    int choice;
    printf("Enter your operation choice: ");  
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Operation 1 selected");
        break;
    case 2:
        printf("Operation 2 selected");
        break;
    case 3:
        printf("Operation 3 selected");
        break;
    case 4:
        printf("Operation 4 selected");
        break;
    default: 
        printf("Invalid operation choice...");
    }
    return 0;
}