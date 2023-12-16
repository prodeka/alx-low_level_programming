#include "main.h"

/**
 * _print_rev_recursion - Imprime une chaîne de caractères à l'envers.
 * @s: La chaîne de caractères à imprimer.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

