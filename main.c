/*
** EPITECH PROJECT, 2024
** Organize
** File description:
** main
*/

#include "include/my.h"
#include "libshell/shell.h"

/// @brief function that launch all the program
int main(void)
{
    all_t *all = malloc(sizeof(all_t));
    int return_value = 0;

    all->head = NULL;
    all->id = 0;
    return_value = workshop_shell(&all);
    free_list(all->head);
    free(all);
    return return_value;
}
