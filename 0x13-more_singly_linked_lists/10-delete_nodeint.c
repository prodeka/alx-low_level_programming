#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - une fonction qui supprime le nœud à l'indice
 * @head: un pointeur vers un pointeur pointant vers la tête de la liste
 * @index: l'indice du nœud à supprimer
 * Return: 1 si la suppression a réussi, -1 en cas d'échec
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *PtrPrec;
listint_t *PtrSuiv;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);
PtrSuiv = *head;
PtrPrec = NULL;
if (index == 0)
{
*head = (*head)->next;
free(PtrSuiv);
return (1);
}
for (i = 0; i < index; i++)
{
if (PtrSuiv == NULL)
return (-1);
PtrPrec = PtrSuiv;
PtrSuiv = PtrSuiv->next;
}
if (PtrPrec)
PtrPrec->next = PtrSuiv->next;
free(PtrSuiv);

return (1);
}
