#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * print_listint_safe - Affiche les éléments d'une liste chaînée
 * @head: Pointe vers le début de la liste chaînée.
 * Return: Le nombre de nœuds dans la liste.
 **/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *pointeur_rapide, *pointeur_lent;
size_t taille;

taille = 0;

if (head == NULL)
return (0);

pointeur_lent = head;
pointeur_rapide = head->next;

while (pointeur_rapide != NULL && pointeur_rapide < pointeur_lent)
{
taille += 1;
printf("[%p] %i\n", (void *)pointeur_lent, pointeur_lent->n);
pointeur_lent = pointeur_lent->next;
pointeur_rapide = pointeur_rapide->next;
}

printf("[%p] %i\n", (void *)pointeur_lent, pointeur_lent->n);
taille += 1;

if (pointeur_rapide)
printf("-> [%p] %i\n", (void *)pointeur_rapide, pointeur_rapide->n);

return (taille);
}
