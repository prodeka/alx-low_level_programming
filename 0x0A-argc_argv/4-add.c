#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Point d'entrée du programme
 * @argc: Nombre d'arguments passés en ligne de commande
 * @argv: Tableau des arguments passés en ligne de commande
 * Return: Toujours 0 (succès)
 */

int main(int argc, char *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
if (argv[i][0] == '-')
{
for (j = 1; argv[i][j] != '\0'; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
}
else
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
