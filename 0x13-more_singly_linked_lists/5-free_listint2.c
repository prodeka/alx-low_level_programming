#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - une fonction qui libère une liste
 * @head: un pointeur vers un pointeur vers la tête de la liste
 **/

void free_listint2(listint_t **head)
{
if (head != NULL)
{
listint_t *PtrActuel = *head;
listint_t *PtrSuivant;

while (PtrActuel != NULL)
{
PtrSuivant = PtrActuel->next;
free(PtrActuel);
PtrActuel = PtrSuivant;
}

*head = NULL;
}
}
