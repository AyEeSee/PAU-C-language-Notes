#include <stdio.h>
#include <string.h>

int main() {
    char message[80];
    printf("Enter a message: ");
    
    // scanf("%s", message); // This command stops reading input when it encounters a space character.
    // Note: **gets(message);** This command does not work in IDEs like VS Code (buffer overflow) and creates a security vulnerability.
    // scanf("%[^\n]", message); // This command also reads space characters.
    fgets(message, sizeof(message), stdin); // This command is the safest one.
    printf("Entered message: %s", message);
    return 0;
}