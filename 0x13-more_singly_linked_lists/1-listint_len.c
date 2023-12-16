#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - Une fonction qui renvoie le
 * nombre d'élément dans la liste chainée
 * @h: pointeur vers la tête de la chaine
 * Return: le nombre de noeud
*/

size_t listint_len(const listint_t *h)
{
size_t nbrretour;
const listint_t *PointeurSuivant;

nbrretour = 0;
PointeurSuivant = h;

while (PointeurSuivant != NULL)
{
nbrretour++;
PointeurSuivant = PointeurSuivant->next;
}

return (nbrretour);
}
