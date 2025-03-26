/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** sort
*/

#include "include/my.h"

/// @brief call the name merge sort in alphabetical order
/// @param data head of the linked list you want to sort
/// @return the head of the sorted linked list
node_t *type_sort(void *data)
{
    all_t **all = data;

    (*all)->head = tri_fusion_type((*all)->head, 0);
    return (*all)->head;
}

/// @brief call the name merge sort in non-alphabetical order
/// @param data head of the linked list you want to sort
/// @return the head of the sorted linked list
node_t *type_sort_reverse(void *data)
{
    all_t **all = data;

    (*all)->head = tri_fusion_type((*all)->head, 1);
    return (*all)->head;
}
