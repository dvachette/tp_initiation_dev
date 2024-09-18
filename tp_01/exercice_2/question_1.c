# include <stdio.h> // Importation de stdio.h pour pouvoir utiliser printf

int couper_annee(int); // Déclaration de couper_annee pour pouvoir l'appeler plus tard

/**
 * main est la fonction principale du programme, elle est appelée automatiquement au lancement du programme
 * Elle renvoie 0 quand elle s'est bien exécutée
 */
int main(){
    int annee, annee_tronquee; // Déclaration des variables locales
    annee = 2024; // Affectation de 2024 à annee
    annee_tronquee = couper_annee(annee); // Appel de couper annee et affectation du resultat à annee_tronquee
    printf("On coupe %d. On obtient %d\n", annee, annee_tronquee); // Affichage du resultat dans la console
    return 0; // Renvoi de 0 (Tout s'est bien passé)
}
/** 
* couper_anne prend une année au format aaaa, et la renvoie au format aa
couper_annee(2024) -> 24
*/
int couper_annee(int a) {
    return a%100; // % est le symbole du modulo (reste de la division entiere). a%100 est égal aux deux derniers chiffres de a
}

