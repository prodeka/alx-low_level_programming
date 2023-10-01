#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste chaînée
 * @head: Pointeur vers un pointeur de la tête de la liste
 * @str: Chaîne de caractères à copier et à attribuer au nouveau nœud
 *
 * Description :
 * Cette fonction crée un nouveau nœud et l'ajoute à la fin de la liste
 * chaînée. La chaîne de caractères `str` est copiée et attribuée au
 * nouveau nœud. La fonction renvoie l'adresse du nouveau nœud, ou NULL
 * en cas d'échec.
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node;
unsigned int len = 0;
char *copy_str;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

copy_str = strdup(str);
if (copy_str == NULL)
{
free(new_node);
return (NULL);
}

while (str[len])
len++;

new_node->str = copy_str;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (*head);
}

last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;

last_node->next = new_node;

return (*head);
}
