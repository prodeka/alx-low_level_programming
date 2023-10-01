#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - supprime le nœud de tête d'une liste
 * @head: un pointeur vers un pointeur vers la liste
 * Return: la donnée du nœud de tête (n)
 **/

int pop_listint(listint_t **head)
{
int donnee;
listint_t *PtrNoeudLibre;

if (head == NULL)
{
return (0);
}

if (*head == NULL)
{
return (0);
}

donnee = 0;

PtrNoeudLibre = *head;
donnee = (*head)->n;

*head = (*head)->next;

free(PtrNoeudLibre);

return (donnee);
}
