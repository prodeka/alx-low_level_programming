#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Libère une liste chaînée
 * @head: Pointeur vers la tête de la liste
 *
 * Description :
 * Cette fonction libère la mémoire allouée pour chaque nœud de la liste
 * chaînée. Elle parcourt la liste en libérant d'abord la mémoire allouée
 * pour la chaîne de caractères, puis pour le nœud lui-même. La fonction
 * ne renvoie rien.
 */
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
