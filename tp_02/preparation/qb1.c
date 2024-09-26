# include <stdio.h>
int plus_petit2(int, int);
int plus_petit3(int, int, int);
int deux_plus_grands(int, int, int);

int main() {
    int a, b, c;
    printf("Entrez a et b (entiers, separes par des espaces) : ");
    scanf("%d %d", &a, &b);
    printf("Le plus petit entre %d et %d est %d\n", a, b, plus_petit2(a, b));
    printf("Entrez a, b et c (entiers, separes par des espaces) : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Le plus petit entre %d, %d et %d est %d\n", a, b, c, plus_petit3(a, b, c));
    printf("La somme des deux plus grands entre %d, %d et %d sont %d\n", a, b, c, deux_plus_grands(a, b, c));
    return 0;
}

int plus_petit2(int a, int b){
    return a*(a<=b) + b*(a>b);
}

int plus_petit3(int a, int b, int c){
    int ans;
    ans = plus_petit2(a, b);
    ans = plus_petit2(ans, c);
    return ans;
}

int deux_plus_grands(int a, int b, int c) {
    return a + b + c - plus_petit3(a, b, c);;
}