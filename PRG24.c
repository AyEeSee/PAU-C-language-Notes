#include <stdio.h>
#include <string.h>

int main(){
    char str[8] = "Hello";
    char str2[6] ="World";
    char str3[13];
    int len ;
    strcpy(str3, str); // Copys str1 to str.
    printf("strcpy( str3, str): %s\n", str3);
    strcat(str, str2); // Merges str2 and str.
    printf("strcat(str, str2): %s\n", str);
    len = strlen(str); // Finds lenght after marge process
    printf("strlen(str): %d\n", len);
    return 0;
}