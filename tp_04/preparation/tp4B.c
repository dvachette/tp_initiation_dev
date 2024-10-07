# include <stdio.h>
# include <assert.h>
char vers_minuscule(char carac);
char vers_majuscule(char carac);

/**
 * @param carac:char
 * @pre 65 <= carac <= 90
 * @return carac_min:char
 * @post carac_min = carac + 32; carac_min est la lettre minuscule de carac
 */
char vers_minuscule(char carac) {
    assert((carac >= 65) && (carac <= 90));
    char carac_min;
    carac_min += 32;
    return carac_min;
}

/**
 * @param carac:char
 * @pre 97 <= carac <= 122
 * @return carac_maj:char
 * @post carac_maj = carac - 32; carac_maj est la lettre majuscule de carac
 */
char vers_majuscule(char carac) {
    assert((carac >= 65) && (carac <= 90));
    char carac_maj;
    carac_maj -= 32;
    return carac_maj;
}

int main() {
    printf("%s en majuscule est %s\n", "c", vers_majuscule("c"));
    printf("%s en minuscule est %s\n", "Y", vers_minuscule("Y"));
}