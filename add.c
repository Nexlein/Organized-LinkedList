/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** ADD
*/

#include "include/my.h"

/// @brief print the information of the node just created
/// @param[out] all structure with the id and the head of the list
int print_created_node(all_t **all)
{
    my_putstr((*all)->head->type);
    my_putstr(" n°");
    my_put_nbr((*all)->head->id);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr((*all)->head->name);
    my_putchar('"');
    my_putstr(" added.\n");
    return 0;
}

/// @brief create the node asked by the add command
/// @ref int add(void *data, char **args)
/// @param data pointer with no type
/// @param i number to locate the argument in the input
/// @param j number to locate the argument in the input
/// @param args arguments in the input
void needcreate(void *data, int i, int j, char **args)
{
    char *name;
    char *type;
    all_t **all = data;

    name = my_strdup(args[i]);
    type = my_strdup(args[j]);
    (*all)->head =
        add_node_start((*all)->head, name, (*all)->id, type);
    print_created_node(all);
    (*all)->id++;
}

/// @brief add node when a type and a name is given as parameter
/// @param[out] data pointer with no type
/// @param[out] args argument in the input
/// @return 0 if the nodes are correctly added, 84 in case of error
int add(void *data, char **args)
{
    int j = 0;
    int nb_arg = count_words(args);

    if (nb_arg % 2 != 0 || nb_arg == 0)
        return 84;
    for (int i = 1; i < nb_arg; i += 2) {
        if (check_type(args[j]) == 0) {
            needcreate(data, i, j, args);
            j += 2;
        } else {
            return 84;
        }
    }
    return 0;
}
