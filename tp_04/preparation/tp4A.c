# include <assert.h>

double reduction(double);
/**
 * @param[in] prix:double
 * @pre prix > 0
 * @return double
 * @post Le prix d'origine après éventuelle remise de 10 €
 */
double reduction(double prix) {
    assert(prix > 0);
    double prix_red = prix; 
    if (prix >= 100) { // le prix doit etre superieur a 100 et pas superieur ou egal
        prix_red = prix - 10;
    }
    return prix_red; // Le cahier des charges demmande que le prix original modifié soit renvoyé, 
}
/*
/**
 * @param[in] prix:double
 * @pre prix > 0
 * @return double
 * @post Le prix d'origine après éventuelle remise de 10 €

double reduction(double prix) {
    assert(prix > 0);
    if (prix > 100) {
        return prix - 10;
    }
    return prix;
}
*/
int main() {
    assert(reduction(1) == 1);
    assert(reduction(100) == 100);
    assert(reduction(100.2) == 90.2);
    assert(reduction(99) == 99);
    return 0;
}