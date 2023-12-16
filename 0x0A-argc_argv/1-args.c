#include <stdio.h>

/**
 * main - point d'entrée
 * @argc: taille de argv
 * @argv: tableau
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))

{
int compteur;
compteur = argc - 1;
printf("%d\n", compteur);
return (0);
}
