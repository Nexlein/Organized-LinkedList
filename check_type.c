/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** ADD
*/

#include "include/my.h"
/// @brief Compare a string with the valid types possible
/// @param arg string we want to compare
/// @return 0 if the string is a correct string, else 84
int check_type(char *arg)
{
    if (my_strcmp(arg, "WIRE") == 0)
        return 0;
    if (my_strcmp(arg, "ACTUATOR") == 0)
        return 0;
    if (my_strcmp(arg, "DEVICE") == 0)
        return 0;
    if (my_strcmp(arg, "PROCESSOR") == 0)
        return 0;
    if (my_strcmp(arg, "SENSOR") == 0)
        return 0;
    return 84;
}
