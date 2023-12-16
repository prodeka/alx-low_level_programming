#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - une fonction qui libère une liste
 * @head: un pointeur vers la tête de la liste
 **/

void free_listint(listint_t *head)
{
listint_t *PtrActuel;
listint_t *Suivant;

PtrActuel = head;
while (PtrActuel != NULL)
{
Suivant = PtrActuel->next;
free(PtrActuel);
PtrActuel = Suivant;
}
}
