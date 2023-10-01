#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne de caractères,
 * suivie d'une nouvelle ligne.
 * @s: La chaîne de caractères à afficher.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
