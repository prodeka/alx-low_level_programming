#include "lists.h"
#include <stddef.h>

/**
 * list_len - Retourne le nombre d'éléments dans une liste chaînée
 * @h: Pointeur vers la tête de la liste chaînée
 *
 * Description :
 * Cette fonction parcourt tous les éléments d'une liste chaînée
 * à partir de la tête et compte le nombre d'éléments. Elle renvoie
 * le nombre total d'éléments dans la liste.
 *
 * Return: Le nombre d'éléments dans la liste chaînée
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

