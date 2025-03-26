/*
** EPITECH PROJECT, 2024
** workshop linked list
** File description:
** Task 01
*/

#include "include/my.h"
/// @brief Create a new node
/// @param name name of the new node
/// @param id id of the new node
/// @param type type of the new node
/// @return the new node just created
node_t *create_node(char *name, int id, char *type)
{
    node_t *new_node = malloc(sizeof(node_t));

    new_node->name = name;
    new_node->id = id;
    new_node->type = type;
    new_node->next = NULL;
    return new_node;
}
