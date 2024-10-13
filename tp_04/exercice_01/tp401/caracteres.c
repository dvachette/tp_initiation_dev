# include "caracteres.h"
# include <assert.h>

/**
 * @brief Check if a character is a lowercase letter
 * @param[in] c : char
 * @return int
 * @post Return 1 if c is a lowercase letter, 0 otherwise
 */
int est_une_minuscule(char c) {
    return (c >= 97) && (c <= 122);
}


/**
 * @brief Check if a character is an uppercase letter
 * @param[in] c : char
 * @return int
 * @post Return 1 if c is an uppercase letter, 0 otherwise
 */
int est_une_majuscule(char c) {
    return (c >= 65) && (c <= 90);
}


/**
 * @brief Invert the case of a character
 * @param[in] c : char
 * @return char
 * @post Return the character c with its case inverted
 */
char inversion_casse(char c) {
    if (est_une_minuscule(c)) {
        return c - 32;
    } else if (est_une_majuscule(c)) {
        return c + 32;
    } else {
        return c;
    }
}

/**
 * @brief Shift a character by 13 positions in the alphabet
 * @param[in] c : char
 * @pre c is a lowercase letter
 * @return char
 * @post Return the character c shifted by 13 positions in the alphabet
 * @post If c is 'a', return 'n', if c is 'z', return 'm'
 */
char decale_minuscule(char c) {
    assert(est_une_minuscule(c));
    return (c - 97 + 13) % 26 + 97;
}

/**
 * @brief Shift a character by 13 positions in the alphabet
 * @param[in] c : char
 * @pre c is an uppercase letter
 * @return char
 * @post Return the character c shifted by 13 positions in the alphabet
 * @post If c is 'A', return 'N', if c is 'Z', return 'M'
 */
char decale_majuscule(char c) {
    assert(est_une_majuscule(c));
    return (c - 65 + 13) % 26 + 65;
}