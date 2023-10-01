#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - renvoie le nième nœud d'une liste chainée
 * @head: un pointeur vers la liste
 * @index: l'indice du nœud à retourner
 * Return: le nième nœud de la listeint_t ou NULL s'il n'existe pas
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *PtrActuel;

if (head == NULL)
{
return (NULL);
}

PtrActuel = head;

for (i = 0; i < index; i++)
{
if (PtrActuel == NULL)
{
return (NULL);
}

PtrActuel = PtrActuel->next;
}

return (PtrActuel);
}
