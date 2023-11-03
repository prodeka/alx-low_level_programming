#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - une fonction qui insère un nouveau nœud
 * @head: un pointeur vers un pointeur vers une structure
 * @idx: est un indice de la liste
 * @n: les données pour le nouveau nœud
 * Return: l'adresse du nouveau nœud, ou NULL en cas d'échec
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *PtrSuiv;
listint_t *PtrPrec;
listint_t *NouveauNoeud;
unsigned int i;

if (head == NULL)
return (NULL);
PtrSuiv = *head;
PtrPrec = NULL;
for (i = 0; i < idx; i++)
{
if (PtrSuiv == NULL)
return (NULL);
PtrPrec = PtrSuiv;
PtrSuiv = PtrSuiv->next;
}
NouveauNoeud = malloc(sizeof(listint_t));
if (!NouveauNoeud)
return (NULL);
NouveauNoeud->n = n;
NouveauNoeud->next = PtrSuiv;
if (idx == 0)
*head = NouveauNoeud;
else
PtrPrec->next = NouveauNoeud;
return (NouveauNoeud);
}
