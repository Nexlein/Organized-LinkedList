/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** fusion two linked list
*/

#include "include/my.h"

/// @brief merge two nodes by comparing there id
/// @param left node one
/// @param right node two
/// @param reverse 0 for ascending order, else for descending order
/// @return the node beeing the new head of a list with the sort informations
node_t *fusion_id(node_t *left, node_t *right, int reverse)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    if (reverse == 0) {
        if (left->id < right->id) {
            left->next = fusion_id(left->next, right, reverse);
            return left;
        } else {
            right->next = fusion_id(left, right->next, reverse);
            return right;
        }
    }
    if (left->id > right->id) {
        left->next = fusion_id(left->next, right, reverse);
        return left;
    } else {
        right->next = fusion_id(left, right->next, reverse);
        return right;
    }
}
