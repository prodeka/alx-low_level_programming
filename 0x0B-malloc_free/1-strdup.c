#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplique une chaîne de caractères.
 * @str: La chaîne de caractères à dupliquer.
 *
 * Return: Un pointeur vers la chaîne dupliquée ou NULL en cas d'échec.
 */

char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);

for (i = 0; i < length; i++)
duplicate[i] = str[i];

duplicate[length] = '\0';

return (duplicate);
}
