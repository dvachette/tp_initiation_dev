# include "caracteres.h"
# include <assert.h>
# include <stdio.h>
#define RESET "\033[0m"
#define GREEN "\033[38;5;46m"

int main() {
    assert(decale_minuscule('a') == 'n');
    assert(decale_minuscule('z') == 'm');
    assert(decale_minuscule('b') == 'o');
    assert(decale_minuscule('y') == 'l');
    assert(decale_minuscule('c') == 'p');
    assert(decale_minuscule('x') == 'k');
    assert(decale_majuscule('A') == 'N');
    assert(decale_majuscule('Z') == 'M');
    assert(decale_majuscule('B') == 'O');
    assert(decale_majuscule('Y') == 'L');
    assert(decale_majuscule('C') == 'P');
    assert(decale_majuscule('X') == 'K');
    printf(GREEN "All tests passed\n" RESET);
    return 0;
}
