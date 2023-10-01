#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - une fonction qui ajoute un nouveau nœud
 * à la fin d'une liste
 * @head: un pointeur vers un pointeur vers la tête de la liste
 * @n: valeur à ajouter au nouveau nœud
 * Return: l'adresse du nouvel élément, ou NULL en cas d'échec
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *PtrActuel;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}
else
{
new_node->n = n;
new_node->next = NULL;
}

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

PtrActuel = *head;
while (PtrActuel->next != NULL)
PtrActuel = PtrActuel->next;

PtrActuel->next = new_node;
return (new_node);
}
