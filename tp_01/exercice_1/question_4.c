# include <stdio.h> // Importation permettant d'utiliser printf 
// ATTENTION, TVA MODIFIEE A 5.5
# define TVA 5.5 // Definition de TVA en tant qu'alias de 5.5 . On peut aussi faire "const float TVA = 5.5;"

float ttc(float); // Déclaration de la fonction ttc, pour pouvoir l'appeler dans le programme

/**
 * main est la fonction principale du programme, appelée automatiquement.
 * Elle renvoie 0, ce qui signifie qu'elle s'est executée correctement.
 */
int main(){
    float prix, prix_ttc; // Définition des variables locales
    printf("Entrez un prix (flottant) : "); // Demande de l'entrée utilisateur
    scanf("%f", &prix); // Récupération de la valeur entrée par l'utilisateur et affectation à prix
    prix_ttc = ttc(prix); // Appel de ttc et affectation du resultat de ttc(prix) à prix_ttc
    printf("Le prix ttc de %.2f est %.2f\n", prix, prix_ttc); // Affichage du resultat dans la console
    return 0; // Renvoi de la valeur 0 (L'execution s'est déroulée sans problèmes)
}

/**
 * ttc est une fonction qui prends en paramètre un prix flottant, et renvoie ce prix majoré de la TVA
 *  
 */
float ttc(float prix_ht) {
    float prix_ttc; // Déclaration des variables locales
    prix_ttc = prix_ht * (1 + TVA / 100); // On calcule le prix ttc, et on affecte le résultat a la variable "prix_ttc"
    return prix_ttc; // On renvoie la valeur de "prix_ttc"
}