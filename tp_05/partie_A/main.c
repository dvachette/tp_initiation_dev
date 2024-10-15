# include "operation_tableau.h"
# include <stdio.h>

int main() {
    int tab1[15] = {7, 3, 10, 11, 4, 5, 19, 17, 15, 7, 5, 9, 1, 19, 8};
    int tab2[15] = {1, 3, 5, 6, 7, 8, 8, 10, 11, 12, 13, 13, 13, 16, 17};
    printf("tab1 : ");
    afficher_tableau(15, tab1);
    printf("tab2 : ");
    afficher_tableau(15, tab2);
    return 0;
}