 #include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne
 * de caractères de manière récursive grâce à une variable
 * compteur.
 * @s: La chaîne de caractères.
 * Return: La longueur de la chaîne.
 */

int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
{
n = 1 + _strlen_recursion(s + 1);
}
return (n);
}
