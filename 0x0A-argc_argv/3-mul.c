#include <stdio.h>
#include <stdlib.h>

/**
 * main - Point d'entrée du programme
 * @argc: Nombre d'arguments passés en ligne de commande
 * @argv: Tableau des arguments passés en ligne de commande
 * Return: Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
int i, multiplicateur = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}

for (i = 1; i < argc; i++)
multiplicateur *= atoi(argv[i]);

printf("%d\n", multiplicateur);
return (0);
}
