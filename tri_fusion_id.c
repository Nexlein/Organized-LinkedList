/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** fusion two linked list
*/

#include "include/my.h"
/// @brief start the merge sort by id
/// @param head head of the linked list you want to sort
/// @param reverse 0 for ascending order else for descending order
/// @return the linked list sorted by id
node_t *tri_fusion_id(node_t *head, int reverse)
{
    node_t *center;
    node_t *left;
    node_t *right;

    if (head == NULL || head->next == NULL)
        return head;
    center = split_linked(head);
    left = tri_fusion_id(head, reverse);
    right = tri_fusion_id(center, reverse);
    return fusion_id(left, right, reverse);
}
