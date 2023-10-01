#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/* Autres déclarations et directives de préprocesseur nécessaires */

/**
 * struct list_s - Structure d'un nœud de liste chaînée
 * @str: Pointeur vers une chaîne de caractères
 * @len: Longueur de la chaîne de caractères
 * @next: Pointeur vers le prochain nœud de la liste
 *
 * Description : Structure d'un nœud de liste chaînée
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__ ((constructor)) print_first(void);
#endif /* LISTS_H */

