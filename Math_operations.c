#include <stdio.h>

int main()
{
    float nr1, nr2, sum;
    printf("Enter first number: ");
    scanf("%f", &nr1);
    printf("Enter second number: ");
    scanf("%f", &nr2);
    while (1)
    {
        char operation;
        printf("What operation do you want to perform? (+, -, *, /): ");
        scanf(" %c", &operation);
        switch (operation)
        {
        case '+':
            sum = nr1 + nr2;
            printf("Sum of %.2f and %.2f is %.2f\n", nr1, nr2, sum);
            break;
        case '-':
            sum = nr1 - nr2;
            printf("Difference of %.2f and %.2f is %.2f\n", nr1, nr2, sum);
            break;
        case '*':
            sum = nr1 * nr2;
            printf("Product of %.2f and %.2f is %.2f\n", nr1, nr2, sum);
            break;
        case '/':
            if (nr2 != 0)
            {
                sum = nr1 / nr2;
                printf("Quotient of %.2f and %.2f is %.2f\n", nr1, nr2, sum);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation. Please try again.\n");
        }
    }

    return 0;
}
