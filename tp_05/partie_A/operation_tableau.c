# include <stdio.h>
# include "operation_tableau.h"

void afficher_tableau(int n, int tab[n]) {
    for (int i = 0; i < n; i++) {
        printf("%d",tab[i]);
        if (i < n-1) {
            printf(", ");
        }
    }
    printf("\n");
}