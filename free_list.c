/*
** EPITECH PROJECT, 2024
** workshop linked list
** File description:
** task07
*/

#include "include/my.h"
/// @brief free all a linked list
/// @param head head of the linked list we want to free
void free_list(node_t *head)
{
    node_t *tmp = head;
    node_t *previous = NULL;

    while (tmp != NULL) {
        previous = tmp;
        tmp = tmp->next;
        free(previous->name);
        free(previous->type);
        free(previous);
    }
}
