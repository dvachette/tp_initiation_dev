# include <stdio.h> // Importation de stdio.h pour pouvoir utiliser printf

// Déclarations des fonctions pour pouvoir les appeler plus tard
int couper_annee(int); 
int vers_date(int, int, int); 
int est_date_valide(int);


/**
 * main est la fonction principale du programme, elle est appelée automatiquement au lancement du programme
 * Elle renvoie 0 quand elle s'est bien exécutée
 */
int main(){
    // tests :
    // test de couper_annee
    int annee, annee_tronquee; // Déclaration des variables locales
    annee = 2024; // Affectation de 2024 à annee
    annee_tronquee = couper_annee(annee); // Appel de couper annee et affectation du resultat à annee_tronquee
    printf("On coupe %d. On obtient : %d\n", annee, annee_tronquee); // Affichage du resultat dans la console

    // test de vers_date
    int j, m, a, date; // Déclaration des variables locales. m représente les mois, j les jours, et a les années
    a = 2024; // Affectation de 2024 à a
    m = 8; // Affectation de 8 à m
    j = 25; // Affectation de 25 à j
    date = vers_date(j, m, a); // calcul de la date avec la fonction vers_date
    printf("La date %d/%d/%d est convertie en %d\n", j, m, a, date); // Affichage du resultat dans la console

    // test de est_date_valide
    int date0, date1, date2; // Déclaration des variables locales.
    date0 = 300224; // Affectation de 300224 à date0 (30 février 2024)
    date1 = 300824; // Affectation de 300824 à date1 (30 août 2024)
    date2 = 311124; // Affectation de 311124 à date2 (31 novembre 2024)
    if (est_date_valide(date0)) {
        printf("La date %d est valide !\n", date0); // Affichage du resultat dans la console
    } else {
        printf("La date %d n'est pas valide !\n", date0); // Affichage du resultat dans la console
    }
    if (est_date_valide(date1)) {
        printf("La date %d est valide !\n", date1); // Affichage du resultat dans la console
    } else {
        printf("La date %d n'est pas valide !\n", date1); // Affichage du resultat dans la console
    }
    if (est_date_valide(date2)) {
        printf("La date %d est valide !\n", date2); // Affichage du resultat dans la console
    } else {
        printf("La date %d n'est pas valide !\n", date2); // Affichage du resultat dans la console
    }
    return 0; // Renvoi de 0 (Tout s'est bien passé)
}


/** 
* couper_anne prend une année au format aaaa, et la renvoie au format aa
* couper_annee(2024) -> 24
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


/**
 * est_date_valide est une fonction qui prend une date au format jjmmaa, et renvoie 1 si la date est valide, 0 sinon
 * est_date_valide(250824) -> 1
 * est_date_valide(290220) -> 0
 */
int est_date_valide(int date) {
    int max_days, j, m, a; // Déclaration des variables locales
    j = date/10000; // On récupère les deux premiers chiffres de date: le jour
    m = (date%10000)/100; // On récupère les deux chiffres du milieu: le mois
    a = date%100; // On récupère les deux derniers chiffres: l'année
    if (2 == m) {
        max_days = 28; // Si le mois est février, on a 28 jours au maximum
    } else if (((m % 2) && (m < 8)) || (!(m % 2) && (m > 7))) { 
        max_days = 31; // Si le mois est impair (m%2) et inférieur à 8 (m<8), ou pair !(m%2) et supérieur à 7 (m>7), on a 31 jours au maximum
    } else {
        max_days = 30; // Sinon, on a 30 jours au maximum
    }
    return j <= max_days; // On renvoie 1 si le jour est inférieur ou égal au nombre de jours max, 0 sinon
}