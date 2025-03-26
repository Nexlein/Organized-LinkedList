/*
** EPITECH PROJECT, 2024
** organized
** File description:
** recode
*/

#include "include/my.h"

int print_linked(node_t *head)
{
    while (head != NULL) {
        my_put_nbr(head->id);
        head = head->next;
    }
    return 0;
}
