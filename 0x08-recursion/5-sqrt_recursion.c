#include "main.h"

/**
 * _sqrt_recursion - Calcule la racine carrée naturelle d'un
 * nombre de manière récursive.
 * @n: Le nombre pour lequel la racine carrée est calculée.
 *
 * Return: La racine carrée naturelle de n. En cas
 * d'absence de racine carrée naturelle, retourne -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 && n == 1)
{
return (n);
}
else
{
return (get_root(n, 1));
}
}

/**
 * get_root - Fonction auxiliaire
 * pour calculer récursivement la racine carrée.
 * @n: Le nombre pour lequel la racine carrée est calculée.
 * @guess: Estimation actuelle de la racine carrée.
 *
 * Return: La racine carrée naturelle de n.
 */

int get_root(int n, int guess)
{
if ((guess * guess) == n)
{
return (guess);
}
else if ((guess * guess) > n)
{
return (-1);
}
else
{
return (get_root(n, guess + 1));
}
}
