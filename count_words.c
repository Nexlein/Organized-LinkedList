/*
** EPITECH PROJECT, 2024
** Personal function
** File description:
** count words
*/

#include "include/my.h"
/// @brief count the number of words in an array
/// @param args char **
/// @return number of word in the array
int count_words(char **args)
{
    int count = 0;

    for (int i = 0; args[i] != NULL; i++) {
        for (int j = 0; args[i][j] != '\0'; j++);
        count++;
    }
    return count;
}
