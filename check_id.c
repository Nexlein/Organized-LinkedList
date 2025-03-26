/*
** EPITECH PROJECT, 2024
** linked list
** File description:
** chack if the id deleted is existing
*/

#include "include/my.h"
/// @brief Search a node by his id
/// @param data head of a linked list
/// @param id id of the node we are searching
/// @return 0 if a node have the id we search, 84 if no node have this id
int check_id(void *data, char *id)
{
    all_t **all = data;
    node_t *tmp = (*all)->head;
    int num_id = my_stringtoint(id);

    while (tmp != NULL) {
        if (tmp->id == num_id)
            return 0;
        tmp = tmp->next;
    }
    return 84;
}
