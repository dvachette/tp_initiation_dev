# include <stdio.h> // Inclure la bibliotheque standard d'entree/sortie


// Déclaration des fonctions pour les utiliser dans le main
int facto_rec(int); // Calculer le factoriel de n (récursif)
int facto(int); // Calculer le factoriel de n (itératif)


int main() {
    // Déclaration des variables
    int entier = 0, fe; // Déclaration de l'entier et de la variable pour le factoriel de l'entier
    short court = 0, fs; // Déclaration du court et de la variable pour le factoriel du court
    long lon = 0, fl; // Déclaration du long et de la variable pour le factoriel du long
    long long longlon = 0, fll; // Déclaration du long long et de la variable pour le factoriel du long long

    // Initialisation des variables
    fe = 1; // Initialisation de la variable pour le factoriel de l'entier (facto(0) = 1)
    fs = 1; // Initialisation de la variable pour le factoriel du court (facto(0) = 1)
    fl = 1; // Initialisation de la variable pour le factoriel du long (facto(0) = 1)
    fll = 1; // Initialisation de la variable pour le factoriel du long long (facto(0) = 1)


    // Tant que le factoriel de l'entier est positif, afficher l'entier et augmenter l'entier et le factoriel de l'entier
    while (fe > 0) {
        printf("entier : %d\n", entier);
        entier ++;
        fe *= entier;
    } // Quand le factoriel de l'entier devient négatif, sortir de la boucle


    // Tant que le factoriel du court est positif, afficher le court et augmenter le court et le factoriel du court
    while (fs > 0) {
        printf("court : %hd\n", court);
        court ++;
        fs *= court;
    } // Quand le factoriel du court devient négatif, sortir de la boucle

    
    // Tant que le factoriel du long est positif, afficher le long et augmenter le long et le factoriel du long    
    while (fl > 0) {
        printf("lon : %ld\n", lon);
        lon ++;
        fl *= lon;
    } // Quand le factoriel du long devient négatif, sortir de la boucle


    // Tant que le factoriel du long long est positif, afficher le long long et augmenter le long long et le factoriel du long long
    while (fll > 0) {
        printf("longlon : %lld\n", longlon);
        longlon ++;
        fll *= longlon;
    } // Quand le factoriel du long long devient négatif, sortir de la boucle



    // Afficher les valeurs des variables, après la sortie des boucles. Elles sont les valeurs maximales possibles
    printf("int : %d\nshort : %hd\nlong : %ld\nlong long : %lld\n", entier, court, lon, longlon);
    return 0;
}


/**
 * Fonction facto_rec
 * Elle va calculer le factoriel de n en utilisant la récursivité
 * Elle utilise la propriété n! = n * (n-1)! et 0! = 1
 * Elle renvoie le factoriel de n
 */
int facto_rec(int n) {
    if (n < 0) { // Si n est négatif, renvoyer 0
        printf("Hors plage\n"); // Affichage d'un message d'erreur
        return 0;
    } else if (!n) { // Si n est nul, renvoyer 1
        return 1;
    } else{  // Sinon, renvoyer n * (n-1)!
        return n * facto(n-1);
    }
}


/**
 * Fonction facto
 * Elle va calculer le factoriel de n en utilisant l'itératif
 * Elle renvoie
 */
int facto(int n) {
    int ans = 1;
    if (!n) {
        return 0;
    }
    for (int i = n; i>0; i--) {
        ans *= i;
    }
    return ans;
}