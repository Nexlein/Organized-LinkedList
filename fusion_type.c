/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** fusion two linked list
*/

#include "include/my.h"

/// @brief merge two nodes by comparing there types
/// @param left node one
/// @param right node two
/// @param reverse 0 for alphabetical order, else for non-alphabetical order
/// @return the node beeing the new head of a list with the sort informations
node_t *fusion_type(node_t *left, node_t *right, int reverse)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    if (reverse == 0) {
        if (my_strcmp(left->type, right->type) < 0) {
            left->next = fusion_type(left->next, right, reverse);
            return left;
        } else {
            right->next = fusion_type(left, right->next, reverse);
            return right;
        }
    }
    if (my_strcmp(left->type, right->type) > 0) {
        left->next = fusion_type(left->next, right, reverse);
        return left;
    } else {
        right->next = fusion_type(left, right->next, reverse);
        return right;
    }
}
