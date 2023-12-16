#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - Inverse une liste chaînée.
 * @head: Un pointeur vers un pointeur indiquant la tête de la liste.
 * Return: Un pointeur vers le premier nœud de la liste inversée.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *pointeur_precedent;
listint_t *pointeur_courant;

if (*head == NULL || (*head)->next == NULL)
return (*head);

pointeur_precedent = *head;
pointeur_courant = (*head)->next;

while (pointeur_courant != NULL)
{
(*head)->next = pointeur_courant->next;
pointeur_courant->next = pointeur_precedent;
pointeur_precedent = pointeur_courant;
pointeur_courant = (*head)->next;
}

*head = pointeur_precedent;

return (*head);
}
