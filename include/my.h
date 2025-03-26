/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <time.h>
#include <dirent.h>
#include <ctype.h>
#include <string.h>

#ifndef MY_H
    #define MY_H

typedef struct node {
    /// @brief id of a node
    int id;
    /// @brief type of the node
    char *type;
    /// @brief name of the node
    char *name;
    /// @brief next node in the linked list
    struct node *next;
} node_t;

typedef struct all {
    /// @brief head of the linked list
    node_t *head;
    /// @brief auto incrementing id to give it to every node
    int id;
} all_t;

int my_put_nbr(int nb);
int my_putchar(char c);
int is_valid(char *type);
int check_type(char *arg);
node_t *id_sort(void *data);
int count_words(char **args);
void free_list(node_t *head);
node_t *name_sort(void *data);
node_t *type_sort(void *data);
int my_strlen(char const *str);
int my_putstr(char const *str);
char *my_strdup(const char *src);
node_t *split_linked(node_t *head);
int check_id(void *data, char *id);
node_t *reverse_linked(void *data);
int my_stringtoint(const char *str);
node_t *id_sort_reverse(void *data);
int check_args(char **args, int argc);
node_t *type_sort_reverse(void *data);
node_t *name_sort_reverse(void *data);
int my_strcmp(char const *s1, char const *s2);
node_t *tri_fusion_id(node_t *head, int reverse);
node_t *tri_fusion_type(node_t *head, int reverse);
node_t *tri_fusion_name(node_t *head, int reverse);
node_t *create_node(char *name, int id, char *type);
node_t *fusion_id(node_t *left, node_t *right, int reverse);
node_t *fusion_name(node_t *left, node_t *right, int reverse);
node_t *fusion_type(node_t *left, node_t *right, int reverse);
node_t *add_node_start(node_t *head, char *name, int id, char *type);

#endif /* MY_H */
