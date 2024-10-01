# include <stdio.h> // Inclure la bibliotheque standard d'entree/sortie

// Déclaration de la fonction suivant pour l'utiliser dans le main
int suivant(int);


/**
 * Fonction principale
 * Elle va demander un entier strictement positif à l'utilisateur
 * Elle va afficher les 10 premiers termes de la suite de Syracuse à partir de cet entier
 * Elle renvoie 0
 */
int main() { 
    int n; // Déclaration de la variable n
    printf("Saisir un entier strictement positif : "); // Demande à l'utilisateur d'entrer un entier strictement positif
    scanf("%d", &n); // Lecture de l'entier entré par l'utilisateur
    while (n <= 0) { // Tant que l'entier n'est pas strictement positif
        printf("Invalide, recommencer !\nSaisir un entier strictement positif : "); // Afficher "Invalide, recommencer !" et demander à l'utilisateur d'entrer un entier strictement positif
        scanf("%d", &n); // Lecture de l'entier entré par l'utilisateur
    }
    for (int i = 0; i < 10; i++) { // Pour i allant de 0 à 9
        n = suivant(n); // Calculer le terme suivant de la suite de Syracuse
        printf("%d ", n); // Afficher le terme suivant de la suite de Syracuse
    }
    printf("\n"); // Aller à la ligne
    return 0; // Renvoyer 0, pour dire que le programme s'est terminé correctement
}


/**
 * Fonction suivant
 * Elle va calculer le terme suivant de la suite de Syracuse
 * Elle renvoie le terme suivant
 */
int suivant(int n) { 
    if (n%2) { // Si n est impair
        return n*3+1; // Renvoyer 3n+1
    } else { // Sinon
        return n/2; // Renvoyer n/2
    }
}

