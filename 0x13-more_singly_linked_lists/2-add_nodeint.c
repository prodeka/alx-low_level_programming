#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint - Une fonction qui ajoute un
 * neoud au début d'une chaine de liste simplement liée
 * @head: Le pointeur vers la tête de la chaîne
 * @n: Le donné du noeud
 * Return: l'adresse du nouveau noeud en cas de reussite
 * et NULL en cas d'échecs
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *NouveuNoeud = NULL;
NouveuNoeud = malloc(sizeof(listint_t));

if (NouveuNoeud == NULL)
{
return (NULL);
}
else
{

NouveuNoeud->n = n;
NouveuNoeud->next = *head;
*head = NouveuNoeud;

return (*head);
}

}
