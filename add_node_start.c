/*
** EPITECH PROJECT, 2024
** workshop linked list
** File description:
** Task 02
*/

#include "include/my.h"

/// @brief Add a node at the start of a linked list and make it be the new head
/// @param head head of the linked list we want to add the node
/// @param name name we want to give to the new node
/// @param id id given to the new node
/// @param type type given to the new node
/// @return return the new node / head of the linked list
node_t *add_node_start(node_t *head, char *name, int id, char *type)
{
    node_t *new_head = create_node(name, id, type);

    new_head->next = head;
    head = new_head;
    return head;
}
