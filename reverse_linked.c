/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** reverse linked list
*/

#include "include/my.h"

/// @brief reverse a linked list
/// @param head head of the linked list you want to reverse
/// @return the reversed linked list
node_t *reverse_linked(void *data)
{
    all_t **all = data;
    node_t *curr = (*all)->head;
    node_t *next;
    node_t *prev = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    (*all)->head = prev;
    return (*all)->head;
}
