/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** fusion two linked list
*/

#include "include/my.h"

/// @brief merge two nodes by comparing there names
/// @param left node one
/// @param right node two
/// @param reverse 0 for alphabetical order, else for non-alphabetical order
/// @return the node beeing the new head of a list with the sort informations
node_t *fusion_name(node_t *left, node_t *right, int reverse)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    if (reverse == 0) {
        if (my_strcmp(left->name, right->name) < 0) {
            left->next = fusion_name(left->next, right, reverse);
            return left;
        } else {
            right->next = fusion_name(left, right->next, reverse);
            return right;
        }
    }
    if (my_strcmp(left->name, right->name) > 0) {
        left->next = fusion_name(left->next, right, reverse);
        return left;
    } else {
        right->next = fusion_name(left, right->next, reverse);
        return right;
    }
}
