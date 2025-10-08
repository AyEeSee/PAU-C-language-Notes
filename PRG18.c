#include <stdio.h>
int main()
{
    char choice, response;
    do
    {
        printf("====MAIN MENU====\n");
        printf("1- Add Record\n");
        printf("2- Delete Record\n");
        printf("3- Edit Record\n");
        printf("4- Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice); // We use space for pleasing to the eye
        switch (choice)
        {
            case '1': printf("You selected the Add Record application.\n");
                break;
            case '2': printf("You selected the Delete Record application.\n");
                break;
            case '3': printf("You selected the Edit Record application.\n");
                break;
            case '4': break;
            default: printf("You selected an invalid operation...");
        }
        if (choice == '4') break;
        printf("Do you want to continue [Y/N]: ");
        scanf(" %c", &response); // We use space for pleasing to the eye
    }
    while (response == 'y' || response == 'Y');
    printf("Exited the loop. Goodbye...");
    return 0;
}