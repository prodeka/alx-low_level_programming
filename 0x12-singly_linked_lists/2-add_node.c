#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée
 * @head: Pointeur vers un pointeur de la tête de la liste
 * @str: Chaîne de caractères à copier et à attribuer au nouveau nœud
 *
 * Description :
 * Cette fonction crée un nouveau nœud et l'ajoute au début de la liste
 * chaînée. La chaîne de caractères `str` est copiée et attribuée au
 * nouveau nœud. La fonction renvoie l'adresse du nouveau nœud, ou NULL
 * en cas d'échec.
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *nouveau_noeud = NULL;
unsigned int len = 0;
char *copy_str;

nouveau_noeud = malloc(sizeof(list_t));
if (nouveau_noeud == NULL)
return (NULL);

/**
 * On alloue de la mémoire pour l'argument str et
 * on duplique l'argument dans l'espace allouer
*/
copy_str = strdup(str);
if (copy_str == NULL)
{
free(nouveau_noeud);
return (NULL);
}

/**
 * On parcourt le pointeur str recuperer comme argument tant
 * qu'il est différent de '\0'
*/
while (str[len])
len++;

nouveau_noeud->str = copy_str;
nouveau_noeud->len = len;
nouveau_noeud->next = *head;

*head = nouveau_noeud;

return (nouveau_noeud);
}
