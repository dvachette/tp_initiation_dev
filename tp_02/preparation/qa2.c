# include <stdio.h>
int is_btwn(int a, int b, int x);
int demande_entre(int a, int b);


int main(){
    int a, b, x;
    printf("Entrez a et b (entiers, a < b separes par des espaces) : ");
    scanf("%d %d", &a, &b);
    x = demande_entre(a, b);
    printf("Nombre obtenu : %d\n", x);
    return 0;
}

int demande_entre(int a, int b) {
    int x;
    do {
        printf("Entrez un nombre entre %d et %d : ", a, b);
        scanf("%d", &x);
    } while (!is_btwn(a, b, x));
    return x;
}
/**
 * is_btwn takes three arguments a, b and x.
 * it returns 1 if x is between a and b, and 0 if not
 */
int is_btwn(int a, int b, int x) {
    return (a <= x) && (x <= b);
}

