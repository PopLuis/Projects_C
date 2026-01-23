#include <stdio.h>
#include <stdlib.h>

void to_bin(int num);
void toHexa(int num);
void toOctal(int num);

int main()
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    enum meniu
    {
        caz0,
        caz1,
        caz2,
        caz3
    } opt;

    while (1)
    {

        printf("\n1.Convert to binary!\n");
        printf("2.Convert to hexa!\n");
        printf("3.Convert to octal!\n");
        printf("Select the option: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case caz1:
            to_bin(num);
            break;
        case caz2:
            toHexa(num);
            break;
        case caz3:
            toOctal(num);
            break;
        default:
            break;
        }
    }

    return 0;
}

void to_bin(int num)
{
    int i, j;
    printf("The number in binery: ");
    for (int i = 16; i > 0; i--)
    {
        int bit = (num >> i) & 1;
        if (bit == 1)
        {
            printf("1");
        }
        else
            printf("0");
    }
    printf("\n");
}
void toHexa(int num)
{
    printf("The number in Hexa is: ");
    printf("%X", num);
    printf("\n");
}
void toOctal(int num)
{
    printf("The number in Octal is: ");
    printf("%o", num);
    printf("\n");
}
