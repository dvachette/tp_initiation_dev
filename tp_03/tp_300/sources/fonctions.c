# include "fonctions.h"

int s(int n) {
    int s = 0;
    while (n) {
        s += 10;
        n /= 10;
    }
    return s;
}