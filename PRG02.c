#include <stdio.h>


    int main()
    {
        int a, b, c;
        float d;

        a = 5;
        b = 2;
        c = a + b;
        d = (float)a / b;

        printf("a plus b is = %d\n", c);
        printf("%d + %d = %d\n", a, b, c);
        printf("d = %f\n", d);

//        a = a++; 
//        b = b--;

        c = ++a *b;
        
//      d = a * b / c+2; //İşlem önceliği */+ şeklinde devreye girer

        printf("New value of a is = %d\n", a);
        printf("New value of b is = %d\n", b);
        printf("New value of c is = %d\n", c);

        getchar();
        return 0;

    }

    
