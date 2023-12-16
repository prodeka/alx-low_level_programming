#include <stdio.h>
#include <stdlib.h>

/**
 * main - point d'entrée
 * @argc: taille de argv
 * @argv: tableau
 * Return: 0
 */

int main(int argc, char *argv[])
{
int compteur = 0;

while (compteur < argc)
{
printf("%s\n", argv[compteur]);
compteur++;
}
return (0);
}
