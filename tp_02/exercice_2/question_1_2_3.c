# include <stdio.h> // Inclure la bibliotheque standard d'entree/sortie


// Déclaration des fonctions pour les utiliser dans le main
double moyenne(double, double, double); // Calculer la moyenne des deux plus grands nombres parmi les trois donnés
double demande(); // Demander un nombre entre 0 et 20


/**
 * Fonction principale
 * Elle va demander 3 nombres entre 0 et 20 à l'utilisateur
 * Elle va calculer la moyenne des deux plus grands de ces nombres
 * Elle va afficher la moyenne
 * Elle renvoie 0 pour dire que le programme s'est terminé correctement
 */
int main() {
    double a, b, c, moy; // Déclaration des variables
    a = demande(); // Demander a entre 0 et 20
    b = demande(); // Demander b entre 0 et 20
    c = demande(); // Demander c entre 0 et 20
    moy = moyenne(a, b, c); // Calculer la moyenne de a, b et c
    printf("Moyenne : %.2lf\n", moy); // Afficher la moyenne de a, b et c
    return 0; // Renvoyer 0, pour dire que le programme s'est terminé correctement
}


/**
 * Fonction moyenne
 * Elle va calculer la moyenne des deux plus grands nombres
 * Elle renvoie la moyenne
 */
double moyenne(double a, double b, double c) {

    // Sélectionner le plus petit des trois
    double mini = a; // Initialiser min à a
    if (mini > b) { // Si min est plus grand que b
        mini = b; // min prend la valeur de b
    } // Sinon, min reste a
    if (mini > c) { // Si min est plus grand que c
        mini = c; // min prend la valeur de c
    } // Sinon, min reste min

    return (a+b+c-mini) / 2; // Renvoyer la moyenne des deux plus grands
}


/**
 * Fonction demande
 * Elle va demander un nombre entre 0 et 20 à l'utilisateur
 * Elle va vérifier si le nombre est bien entre 0 et 20
 * Elle renvoie le nombre
 */
double demande() {
    double ans; // Déclaration de la variable
    printf("Entrez une valeur entre 0 et 20 : "); // Demander un nombre entre 0 et 20
    scanf("%lf", &ans); // Lecture du nombre

    while (!((0 <= ans) && (ans <=20))) { // Tant que le nombre n'est pas entre 0 et 20
        printf("Invalide\nEntrez une valeur entre 0 et 20 : "); // Afficher "Invalide" et demander un nombre entre 0 et 20
        scanf("%lf", &ans); // Lecture du nombre
    } 
    return ans; // Renvoyer le nombre
}
