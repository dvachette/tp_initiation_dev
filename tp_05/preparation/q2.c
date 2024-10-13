# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int entier_alea(int mini, int maxi) {
    return rand() % (maxi - mini + 1) + mini;
}

int main() {
    srand(time(NULL));
    for (int j=0;j<4;j++) {
        for (int i=0;i<5;i++) {
            printf("%3d\t", entier_alea(1, 999));
        }
        printf("\n");
    }
}
