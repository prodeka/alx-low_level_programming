#include <stdio.h>
#include <stdlib.h>

/**
 * main - point d'entrée du programme
 * @argc: taille de argv
 * @argv: tableau d'arguments
 * Return: 0 en cas de succès, sinon 1
 */
int main(int argc, char *argv[])
{
int cents, i;
int coins[] = {25, 10, 5, 2, 1};
int num_coins = sizeof(coins) / sizeof(coins[0]);
int count = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}

printf("%d\n", count);
return (0);
}
