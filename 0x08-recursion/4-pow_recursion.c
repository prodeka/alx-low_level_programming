#include "main.h"

/**
 * _pow_recursion - Calcule la valeur de x élevée
 *  à la puissance y de manière récursive.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: La valeur de x élevée à la puissance y.
 * En cas d'erreur (si y est inférieur à 0), retourne -1.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x *= _pow_recursion(x, y - 1));
}
}
