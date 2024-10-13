# include <stdio.h>

int main() {
    int n;
    printf("Saisir un entier : ");
    scanf("%d", &n);
    printf("s(%d) = %d\n", n, s(n));
    return 0;
}