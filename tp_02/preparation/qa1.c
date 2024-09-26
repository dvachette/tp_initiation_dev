# include <stdio.h>

int main() {
    int a, b, x;
    printf("Entrez a, b et c separee par des espaces (entiers) : ");
    scanf("%d %d %d", &a, &b, &x);
    if ((a <= x) && (x <= b)) {
        printf("Vrai\n");
    } else {
        printf("Faux");
    }
}
