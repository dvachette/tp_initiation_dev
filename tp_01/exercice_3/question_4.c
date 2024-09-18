# include <stdio.h>

// Déclarations des fonctions pour pouvoir les appeler plus tard
int sec_2_heure(int);
int sec_suivante(int);
void affiche_heure(int);

/**
 * main est la fonction principale du programme, elle est appelée automatiquement au lancement du programme
 * Elle renvoie 0 quand elle s'est bien exécutée
 */
int main(){
    // tests:
    int secondes, heure;
    secondes = 38257; // Affectation de 38257 à secondes
    heure = sec_2_heure(secondes); // Appel de sec_2_heure et affectation du resultat à heure
    printf("%d secondes donnene l'horaire : ", secondes); 
    affiche_heure(heure); // Appel de affiche_heure pour afficher l'heure
    printf("1s apres, il sera ");
    affiche_heure(sec_suivante(heure)); // Appel de sec_suivante pour afficher l'heure suivante
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


/**
 * sec_suivante prend un nombre hhmmss et renvoie le nombre hhmmss correspondant à la seconde suivante
 * sec_suivante(81623) -> 81624
 * La fonction renvoie un entier 
 */
int sec_suivante(int hhmmss){
    /*
    Déclaration des variables locales : hh, mm, ss pour les heures, minutes et secondes,
    secondes pour le nombre de secondes total, ans pour le résultat
    */ 
    int hh, mm, ss, secondes, ans; 
    hh = hhmmss / 10000; // Division entière de hhmmss par 10000 pour obtenir ses 2 premiers chiffres. hh est égal au nombre d'heures
    mm = (hhmmss / 100) %100; // Calculs sur hhmmss pour obtenir ses 2 chiffres du milieu. mm est égal au nombre de minutes
    ss = hhmmss % 100; // Calcul de ss pour obtenir les 2 derniers chiffres de hhmmss avec le modulo 100
    secondes = 3600*hh+60*mm+ss; // Calcul du nombre de secondes total
    secondes +=1; // Ajout d'une seconde, on pourrait aussi écrire "secondes = secondes + 1" ou "secondes++
    secondes %= 86400; // On prend le reste de la division de secondes par 86400 pour ne pas dépasser 24 heures
    ans = sec_2_heure(secondes); // On reconvertis les secondes en heures, minutes et secondes
    return ans; // On renvoie le nombre en hhmmss
}


/**
 * affiche_heure prend un nombre hhmmss et l'affiche dans la console sous la forme hh:mm:ss
 * affiche_heure(81623) -> 08:16:23
 * La fonction ne renvoie rien car elle affiche directement dans la console et est donc de type void
 */
void affiche_heure(int hhmmss) {
    int hh, mm, ss; // Déclaration des variables locales.
    hh = hhmmss / 10000; // Division entière de hhmmss par 10000 pour obtenir ses 2 premiers chiffres. hh est égal au nombre d'heures
    mm = (hhmmss / 100) %100; // Calculs sur hhmmss pour obtenir ses 2 chiffres du milieu. mm est égal au nombre de minutes
    ss = hhmmss % 100; // Calcul de ss en prenant les 2 derniers chiffres de hhmmss avec le modulo 100
    printf("%02d:%02d:%02d\n", hh, mm, ss); // Affichage de l'heure dans la console
}