/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** check if the type is a valid type
*/

#include "include/my.h"

/// @brief check id a string is one of the possible types
/// @param type string we want to compare
/// @return 1 "ID", 2 "NAME", 3 "TYPE", 4 "-r", else 84
int is_valid(char *type)
{
    if (my_strcmp(type, "ID") == 0)
        return 1;
    if (my_strcmp(type, "NAME") == 0)
        return 2;
    if (my_strcmp(type, "TYPE") == 0)
        return 3;
    if (my_strcmp(type, "-r") == 0)
        return 4;
    return 84;
}

/// @brief verify if an argument is valid or not
/// @param argc number of argument
/// @param args argument in input
/// @return 84 if argument is not valid, 0 if its valid
int is_valid_arg(int argc, char **args)
{
    int i = 0;

    while (args[i] != NULL) {
        if ((is_valid(args[i]) == 4) && (argc == 1)) {
            my_putstr("'-r' must precede a sort type to reverse it.\n");
            return 84;
        }
        if ((is_valid(args[i]) == 4)
        && (is_valid(args[i - 1]) == 4)) {
            my_putstr("'-r' can't precede another '-r'.\n");
            return 84;
        }
        if (is_valid(args[i]) == 84) {
            my_putstr("Sorting argument is not valid.\n");
            return 84;
        }
        i++;
    }
    return 0;
}

/// @brief check if the argument are valid
/// @param args argument in input
/// @param argc number of argument
/// @return 84 is an argument is not valid, 0 if all are valid
int check_args(char **args, int argc)
{
    if (argc == 0) {
        my_putstr("Incorect number of argument.\n");
        return 84;
    }
    if (is_valid_arg(argc, args) == 84)
        return 84;
    return 0;
}
