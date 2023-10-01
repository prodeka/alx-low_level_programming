#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - renvoie la somme de toutes
 * les données (n) d'une liste chainée
 * @head: un pointeur vers la tête de liste
 * Return: la somme de toutes les données de la listeint_t
 **/

int sum_listint(listint_t *head)
{
int sum;
listint_t *PtrActuel;

if (head == NULL)
{
return (0);
}

PtrActuel = head;
sum = 0;

while (PtrActuel != NULL)
{
sum += PtrActuel->n;
PtrActuel = PtrActuel->next;
}
return (sum);
}
