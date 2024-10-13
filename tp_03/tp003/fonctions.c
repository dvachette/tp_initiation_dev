# include "fonctions.h"


/**
 * s - sum of digits
 * @n: integer
 * 
 */
int s(int n) {
    int s = 0;
    while (n) {
        s += n%10;
        n /= 10;
    }
    return s;
}


int nb_chiffres(int n) {
    int nb_c = 0;
    while (n > 0) {
        n = n/10;
        nb_c = nb_c + 1;
    }
    return nb_c;
}
