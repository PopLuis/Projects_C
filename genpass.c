#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The Password generator!\n");
    int lenght;
    printf("Enter the lenght of the password: ");
    scanf("%d", &lenght);
    if (lenght < 0)
    {
        printf("The lenght is lower then 0, pleace enter a valid value!");
        exit(0);
    }
    char charSet[] = "abcdefghijklmnopqrstuvwxyz.;'[]_=+11234567890";

    char password[lenght + 1];
    for (int i = 0; i < lenght; i++)
    {
        int index = rand() % sizeof(charSet);
        password[i] = charSet[index];
    }
    password[lenght] = '\0';
    printf("Generated password: %s\n", password);

    return 0;
}
