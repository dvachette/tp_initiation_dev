# include <stdio.h> // Importation permettant d'utiliser printf 
# define TVA 20.0 // Definition de TVA en tant qu'alias de 20.0 . On peut aussi faire "const double TVA = 20.0;"

double ttc(double); // Déclaration de la fonction ttc, pour pouvoir l'appeler dans le programme

/**
 * main est la fonction principale du programme, appelée automatiquement.
 * Elle renvoie 0, ce qui signifie qu'elle s'est executée correctement.
 */
int main(){
    double prix, prix_ttc; // Définition des variables locales
    prix = 100; // Affectation du prix
    prix_ttc = ttc(prix); // Appel de ttc et affectation du resultat de ttc(prix) à prix_ttc
    printf("Le prix ttc de %.2lf est %.2lsf\n", prix, prix_ttc); // Affichage du resultat dans la console
    return 0; // Renvoi de la valeur 0 (L'execution s'est déroulée sans problèmes)
}

/**
 * ttc est une fonction qui prends en paramètre un prix flottant, et renvoie ce prix majoré de la TVA
 *  
 */
double ttc(double prix_ht) {
    double prix_ttc; // Déclaration des variables locales
    prix_ttc = prix_ht * (1 + TVA / 100); // On calcule le prix ttc, et on affecte le résultat a la variable "prix_ttc"
    return prix_ttc; // On renvoie la valeur de "prix_ttc"
}