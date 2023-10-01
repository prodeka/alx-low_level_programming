#include <stdio.h>

/**
 * main - point d'entrée
 * @argc: taille de argv
 * @argv: tableau
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
