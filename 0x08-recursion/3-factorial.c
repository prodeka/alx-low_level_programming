#include "main.h"

/**
 * factorial - Calcule le factoriel d'un nombre donné.
 * @n: Le nombre pour lequel le factoriel est calculé.
 *
 * Return: Le factoriel de n. En cas
 * d'erreur (si n est inférieur à 0), retourne -1.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n *= factorial(n - 1));
}
}
