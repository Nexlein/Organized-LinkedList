/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** split a linked list
*/

#include "include/my.h"
/// @brief split a linked list in two
/// @ref Merge Sort
/// @param head head of the linked list you want to sort
/// @return head of the half linked list
node_t *split_linked(node_t *head)
{
    node_t *node1 = head;
    node_t *node2 = head;
    node_t *previous = NULL;

    while (node1 != NULL && node1->next != NULL) {
        previous = node2;
        node2 = node2->next;
        node1 = node1->next->next;
    }
    if (previous != NULL)
        previous->next = NULL;
    return node2;
}
