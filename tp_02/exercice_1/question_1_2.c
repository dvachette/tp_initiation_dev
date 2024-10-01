# include <stdio.h> //Inclure la bibliotheque standard d'entree/sortie

void table_mult(int n); // Déclaration de la fonction table_mult pour l'utiliser dans le main


/**
 * Fonction principale
 * Elle va afficher la table de multiplication de n
 * Elle renvoie 0
 */
int main() {
    int n; // Déclaration de la variable n
    printf("Entrez un entier strictement positif : "); // Demande à l'utilisateur d'entrer un entier strictement positif
    scanf("%d", &n); // Lecture de l'entier entré par l'utilisateur
    if (n>0){ // Si l'entier est strictement positif
        table_mult(n); // Afficher la table de multiplication de n
    } else { // Sinon
        printf("Invalide\n"); // Afficher "Invalide"
    }
    return 0; // Renvoyer 0, pour dire que le programme s'est terminé correctement
}


/**
 * Fonction table_mult
 * Elle va afficher la table de multiplication de n
 * Elle ne renvoie rien car elle affiche directement
 */
void table_mult(int n)  {
    for (int i = 1; i <= 10; i++){ // Pour i allant de 1 à 10
        printf("%d * %d = %d\n", i, n, i*n); // Afficher i * n = i*n
    }
}
