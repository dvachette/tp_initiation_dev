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

int somme(int n, int tab[n]) {
    int sum;
    for (int i=0; i<n; i++) {
        sum += tab[i];
    }
    return sum;
}

double moyenne(int n, int tab[n]) {
    return somme(n, tab) / (double)n;
}

int minimum(int n, int tab[n]) {
    int mini = tab[0];
    for (int i=1;i<n;i++) {
        if (mini>tab[i]) {
            mini = tab[i];
        }
    }
    return mini;
}

int indice_du_maximum(int n, int tab[n]) {
    int indice_max=0, maxi=tab[0];
    for (int i=1;i<n;i++) {
        if (tab[i]>maxi) {
            indice_max = i;
            maxi = tab[i];
        }
    }
    return indice_max;
}

int nb_bien_place(int n, int tab[n]) {
    int res;
    for (int i=0; i<n; i++) {
        res += (i=tab[i]);
    }
    return res;
}

int dernier_indice_presence(int n, int tab[n], int k) {
    for (int i=n-1;i>=0;i--) {
        if (tab[i] == k) {
            return i;
        } 
    }
    return -1;
}

int est_trie(int n, int tab[n]) {
    for (int i=0; i<n-1; i++) {
        if (!(tab[i]<tab[i+1])) {
            return 0;;
        }
    }
    return 1;
}






