/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** ADD
*/

#include "include/my.h"
/// @brief print all the information of all the node in the linked list
/// @param data head of the linked list
/// @param args argument in the input
/// @return 0 if the linked list is successfully print, else 84
int disp(void *data, char **args)
{
    all_t **all = data;
    node_t *head = (*all)->head;

    if (args[0] != NULL)
        return 84;
    while (head != NULL) {
        my_putstr(head->type);
        my_putstr(" n°");
        my_put_nbr(head->id);
        my_putstr(" - ");
        my_putchar('"');
        my_putstr(head->name);
        my_putchar('"');
        my_putchar('\n');
        head = head->next;
    }
    return 0;
}
