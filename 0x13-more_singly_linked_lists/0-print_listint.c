#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - une fonction qui affiche
 * tous les éléments d'une liste
 * @h: pointeur vers le début de la liste
 * Return: le nombre de nœuds
 **/

size_t print_listint(const listint_t *h)
{

size_t nombreNoeuds;
const listint_t *pointeurSuivant;

pointeurSuivant = h;
nombreNoeuds = 0;

while (pointeurSuivant != NULL)
{
printf("%d\n", pointeurSuivant->n);
nombreNoeuds++;
pointeurSuivant = pointeurSuivant->next;
}

return (nombreNoeuds);
}
