#include "main.h"

/**
 * is_prime_number - Vérifie si un nombre est un nombre premier.
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si le nombre est premier, 0 sinon.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (check_num(n, 2));
}
}

/**
 * check_num - Vérifie si un nombre
 * est premier en utilisant la récursion.
 * @checker: le nombre utiliser pour vérifier
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si le nombre est premier, 0 sinon.
 */
int check_num(int n, int checker)
{
if (checker == n)
{
return (1);
}
else if ((n % checker) == 0)
{
return (0);
}
else
{
return (check_num(n, checker + 1));
}
}
