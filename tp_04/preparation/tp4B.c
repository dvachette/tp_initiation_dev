#include <stdio.h>
#include <assert.h>

char vers_minuscule(char carac);
char vers_majuscule(char carac);

char vers_minuscule(char carac) {
    assert((carac >= 65) && (carac <= 90));
    char carac_min = carac; // Initialize with input character
    carac_min = carac + 32;
    return carac_min;
}

char vers_majuscule(char carac) {
    assert((carac >= 97) && (carac <= 122)); // Validate lowercase range
    char carac_maj = carac; // Initialize with input character
    carac_maj = carac - 32;
    return carac_maj;
}

int main() {
    printf("%c en majuscule est %c\n", 'c', vers_majuscule('c')); // Use %c for characters
    printf("%c en minuscule est %c\n", 'Y', vers_minuscule('Y')); // Use %c for characters
}