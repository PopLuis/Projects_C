#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char opt;
    char litera[] = {'R', 'P', 'S'};

    printf("Welcome to the ROCK-PAPER-SCISSOR GAME\n");
    printf("For ROCK enter R\n");
    printf("For PAPPER enter P\n");
    printf("For SCISSER enter S\n");

    printf("Enter your choice: ");
    scanf("%c", &opt);
    opt = toupper(opt);
    printf("Your choice is: %c\n", opt);
    int index = rand() % 3;
    printf("The computer choise is: %c\n", litera[index]);
    char compOpt = litera[index];
    if (opt == compOpt)
    {
        printf("DRAW");
    }
    else if (opt == 'R' && compOpt == 'S' || opt == 'P' && compOpt == 'R' || opt == 'S' && compOpt == 'P')
        printf("You WON!");
    else
        printf("You didn-t WIN!");

    return 0;
}
