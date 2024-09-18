# include <stdio.h> // Importation de stdio.h pour pouvoir utiliser printf

// Déclarations des fonctions pour pouvoir les appeler plus tard
int sec_2_heure(int);


/**
 * main est la fonction principale du programme, elle est appelée automatiquement au lancement du programme
 * Elle renvoie 0 quand elle s'est bien exécutée
 */
int main(){
    int secondes, hhmmss; // Déclaration des variables locales.
    secondes = 29783; // Affectation de 29783 à secondes
    hhmmss = sec_2_heure(secondes); // Appel de sec_2_heure et affectation du resultat à hhmmss
    printf("On convertit %d secondes en %d\n", secondes, hhmmss); // Affichage du resultat dans la console
    return 0; // Renvoi de 0 (Tout s'est bien passé)
}


/**
 * sec_2_heure prend un nombre de secondes et le convertit en heures, minutes et secondes
 * sec_2_heure(29783) -> 8 heures, 16 minutes, 23 secondes -> 81623
 */
int sec_2_heure(int d){
    int hh, mm, ss, hhmmss; // Déclaration des variables locales.
    hh = d/3600; // Division entière de d par 3600. hh est égal au nombre d'heures
    d %= 3600; // d est égal au reste de la division entière de d par 3600 (somme des minutes et des secondes, en secondes)
    mm = d / 60; // Division entière de d par 60. mm est égal au nombre de minutes
    d %= 60; // d est égal au reste de la division entière de d par 60 (nombre de secondes restantes)
    ss = d; // ss est égal à d (nombre de secondes restantes)
    hhmmss = ss+100*mm+10000*hh; // On convertit les heures, minutes et secondes en un seul nombre
    return hhmmss; // On renvoie le nombre
}

