#include "lists.h"
#include <stdio.h>

/**
 * print_list - Affiche tous les éléments d'une liste chaînée
 * @h: Pointeur vers la tête de la liste chaînée
 *
 * Description :
 * Cette fonction parcourt tous les éléments d'une liste chaînée à
 * partir de la tête, et les affiche un par un. Chaque élément est
 * affiché avec sa longueur et sa chaîne de caractères associée.
 * Si la chaîne de caractères est NULL, "[0] (nil)" est affiché.
 * La fonction renvoie le nombre total d'éléments dans la liste.
 *
 * Return: a structure to a linked_list
 */

size_t print_list(const list_t *h)
{
size_t compteur = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}

compteur++;
h = h->next;
}

return (compteur);
}
