#include <stdio.h>

int main()
{
    unsigned int n = 8;
    int k = 2; // verificăm bitul 2 (de la 0)

    if (n & (1 << k))
        printf("Bitul %d este 1\n", k);
    else
        printf("Bitul %d este 0\n", k);

    n = n | (1 << k); // folosim OR pentru a pune bitul pe 1
    printf("Numarul dupa setarea bitului %d: %u\n", k, n);

    n = n & ~(1 << k); // folosim AND cu complement pentru a șterge bitul
    printf("Numarul dupa resetarea bitului %d: %u\n", k, n);

    printf("Shift la stânga cu 2: %u\n", n << 2);  // 3 * 2^2 = 12
    printf("Shift la dreapta cu 1: %u\n", n >> 1); // 3 / 2 = 1

    return 0;
}
