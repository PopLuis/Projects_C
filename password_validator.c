#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char password[100];
    int hasUpper = 0, hasLower = 0, hasNum = 0, hasSpecial = 0;

    printf("Pleace enter your password: ");
    scanf("%s", &password);

    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            hasLower = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            hasNum = 1;
        else
            hasSpecial = 1;
    }
    if (strlen(password) >= 8 && hasLower == 1 && hasNum == 1 && hasSpecial == 1 && hasUpper == 1)
    {
        printf("Your password is STRONG! \n");
    }
    else
        printf("You should change your password because is weak!");

    return 0;
}
