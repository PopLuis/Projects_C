#include <stdio.h>

int main() {
    int n, m;
    
    // Citirea dimensiunilor matricei
    printf("Introduceti numarul de linii: ");
    scanf("%d", &n);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &m);

    int a[10][10];  // matrice de maxim 10x10

    // Citirea elementelor matricei
    printf("Introduceti elementele matricei:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Afisarea matricei
    printf("\nMatricea introdusa este:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Suma fiecarui rand
    printf("\nSuma pe fiecare linie:\n");
    for(int i = 0; i < n; i++) {
        int suma_linie = 0;
        for(int j = 0; j < m; j++) {
            suma_linie += a[i][j];
        }
        printf("Linia %d: %d\n", i+1, suma_linie);
    }

    // Suma fiecarui coloana
    printf("\nSuma pe fiecare coloana:\n");
    for(int j = 0; j < m; j++) {
        int suma_coloana = 0;
        for(int i = 0; i < n; i++) {
            suma_coloana += a[i][j];
        }
        printf("Coloana %d: %d\n", j+1, suma_coloana);
    }

    // Verificare daca matricea este patratica
    if(n == m) {
        int suma_diag = 0;
        for(int i = 0; i < n; i++) {
            suma_diag += a[i][i]; // diagonala principala
        }
        printf("\nSuma diagonalei principale: %d\n", suma_diag);
    } else {
        printf("\nMatricea nu este patratica, diagonala principala nu se poate calcula.\n");
    }

    return 0;
}
