# include <stdio.h>

int i = 0, j = 12;                                                  // i = 0, j = 12
int mafonction(int nb);

int main() {

    // i est globale, donc elle est modifiable dans toutes les fonctions
    // j est globale, donc elle est modifiable dans toutes les fonctions
    // k est locale à main, donc elle est modifiable dans main
    // m est locale à main, donc elle est modifiable dans main

    int k = 5, m;                                                   // i = 0, j = 12, k = 5, m = ?
    i = 1;                                                          // i = 1, j = 12, k = 5, m = ?
    m = mafonction(k);                                              // i = 1, j = 6,  k = 5, m = 9
    printf("i = %d; j = %d; k = %d; m = %d;\n", i, j, k, m);
    return 0;
}

int mafonction(int nb) {

    // i est globale, donc elle est modifiable dans toutes les fonctions
    // j est globale, donc elle est modifiable dans toutes les fonctions
    // k est locale à mafonction, donc elle est modifiable dans mafonction
    // nb est locale à mafonction, donc elle est modifiable dans mafonction

    int i, k;                                                       // i = ?,           j = 12, k = ?,          nb = 5
    i = j - nb;                                                     // i = 12 - 5 = 7,  j = 12, k = ?,          nb = 5
    k = i - 5;                                                      // i = 7,           j = 12, k = 7 - 5 = 2,  nb = 5
    j = 6;                                                          // i = 7,           j = 6,  k = 2,          nb = 5
    return i+k;                                                     // i = 7,           j = 6,  k = 2,          nb = 5, return 7 + 2 = 9
}