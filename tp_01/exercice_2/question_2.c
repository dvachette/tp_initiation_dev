# include <stdio.h> // Importation de stdio.h pour pouvoir utiliser printf

int couper_annee(int); // Déclaration de couper_annee pour pouvoir l'appeler plus tard
int vers_date(int, int, int); // Déclaration de vers_date pour pouvoir l'appeler plus tard
/**
 * main est la fonction principale du programme, elle est appelée automatiquement au lancement du programme
 * Elle renvoie 0 quand elle s'est bien exécutée
 */
int main(){
    int j, m, a, date; // Déclaration des variables locales. m représente les mois, j les jours, et a les années
    a = 2024; // Affectation de 2024 à a
    m = 8; // Affectation de 8 à m
    j = 25; // Affectation de 25 à j
    date = vers_date(j, m, a);
    printf("Avec a:%d, m:%d et j:%d, on obtient %d\n", a, m, j, date); // Affichage du resultat dans la console
    return 0; // Renvoi de 0 (Tout s'est bien passé)
}
/** 
* couper_anne prend une année au format aaaa, et la renvoie au format aa
couper_annee(2024) -> 24
*/
int couper_annee(int a) {
    return a%100; // % est le symbole du modulo (reste de la division entiere). a%100 est égal aux deux derniers chiffres de a
}

/**
 * vers_date est une fonction de type int (entier), qui utilise le jour, le mois et l'année, et renvoie la date en format jjmmaa
 * vers_date(2,5,2034) -> 020534
 */
int vers_date(int j, int m, int a) {
    int date, annee; // Déclaration des variables locales
    annee = couper_annee(a); // Découpe de l'année pour avoir le format aa au lieu de aaaa
    date = 10000*j+100*m+annee; // création de la date avec j, m et annee
    return date; // renvoi de la valeur de date
}
