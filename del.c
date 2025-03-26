/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** ADD
*/

#include "include/my.h"

/// @brief print the information of the deleted node
/// @param tmp deleted node
int print_del_node(node_t *tmp)
{
    my_putstr(tmp->type);
    my_putstr(" n°");
    my_put_nbr(tmp->id);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(tmp->name);
    my_putchar('"');
    my_putstr(" deleted.\n");
    return 0;
}

/// @brief delete the node asked by the del function
/// @ref int del(void *data, char **args)
/// @param all structure with id and the head of the linked list
/// @param arg id of the node we want to delete
void is_delete(all_t **all, char *arg)
{
    node_t *previous = NULL;
    node_t *tmp = (*all)->head;

    while (tmp != NULL) {
        if (my_stringtoint(arg) == tmp->id && previous == NULL) {
            (*all)->head = tmp->next;
            print_del_node(tmp);
            free(tmp);
            break;
        }
        if (my_stringtoint(arg) == tmp->id && previous != NULL) {
            print_del_node(tmp);
            previous->next = tmp->next;
            free(tmp);
            break;
        }
        previous = tmp;
        tmp = tmp->next;
    }
}

/// @brief delete node by the id given in input
/// @param data head of the linked list
/// @param args argument in the input
/// @return 0 if the nodes have been successfully, else 84
int del(void *data, char **args)
{
    all_t **all = data;

    if (count_words(args) == 0)
        return 84;
    for (int i = 0; args[i] != NULL; i++) {
        if (check_id(data, args[i]) == 84)
            return 84;
        is_delete(all, args[i]);
    }
    return 0;
}
