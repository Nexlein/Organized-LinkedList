/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** sort
*/

#include "include/my.h"

/// @brief check wich sort is asked and start it
/// @param data head of the linked list you want to sort
/// @param args argument in input
/// @param i to locate the great argument
int reverse_sort(void *data, char **args, int i)
{
    if ((my_strcmp(args[i], "-r") == 0) && (is_valid(args[i - 1]) == 1)) {
        id_sort_reverse(data);
        return 1;
    }
    if ((my_strcmp(args[i], "-r") == 0) && (is_valid(args[i - 1]) == 2)) {
        name_sort_reverse(data);
        return 1;
    }
    if ((my_strcmp(args[i], "-r") == 0) && (is_valid(args[i - 1]) == 3)) {
        reverse_linked(data);
        type_sort_reverse(data);
        return 1;
    }
    return 0;
}

/// @brief check wich sort is asked and start it
/// @param data head of the linked list you want to sort
/// @param args argument in input
/// @return 84 in case of problem, 0 if everything is okay
int sort(void *data, char **args)
{
    int argc = count_words(args);

    if (check_args(args, argc) == 84)
        return 84;
    for (int i = argc; i != 0; i--) {
        if (is_valid(args[i - 1]) == 1)
            id_sort(data);
        if (is_valid(args[i - 1]) == 2)
            name_sort(data);
        if (is_valid(args[i - 1]) == 3) {
            reverse_linked(data);
            type_sort(data);
        }
        if (reverse_sort(data, args, i - 1) == 1)
            i--;
    }
    return 0;
}
