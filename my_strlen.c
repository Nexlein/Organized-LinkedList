/*
** EPITECH PROJECT, 2024
** task03
** File description:
** Day04 task03
*/

#include "include/my.h"
/// @brief count the size of a string
/// @param str string you want to have the size
/// @return the size of the string
int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
