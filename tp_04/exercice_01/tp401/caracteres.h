# ifndef FONCTIONS_H_INCLUDED
# define FONCTIONS_H_INCLUDED


/**
 * @brief est_une_minuscule Check if a character is a lowercase letter
 * @param[in] c : char
 * @return int
 * @post Return 1 if c is a lowercase letter, 0 otherwise
 */
int est_une_minuscule(char c);

/**
 * @brief est_une_majuscule Check if a character is an uppercase letter
 * @param[in] c : char
 * @return int
 * @post Return 1 if c is an uppercase letter, 0 otherwise
 */
int est_une_majuscule(char c);

/**
 * @brief inversion_casse Invert the case of a character
 * @param[in] c : char
 * @return char
 * @post Return the character c with its case inverted
 */
char inversion_casse(char c);

/**
 * @brief decale_minuscule Shift a character by 13 positions in the alphabet
 * @param[in] c : char
 * @pre c is a lowercase letter
 * @return char
 */
char decale_minuscule(char c);

/**
 * @brief decale_majuscule Shift a character by 13 positions in the alphabet
 * @param[in] c : char
 * @pre c is an uppercase letter
 * @return char
 */
char decale_majuscule(char c);
# endif // FONCTIONS_H_INCLUDED
