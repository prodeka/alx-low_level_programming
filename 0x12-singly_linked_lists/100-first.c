#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_first - une fonction qui imprime "You're beat! and yet,
 * you must allow,\nI bore my house upon my back!"
 * avant l'exécution de la fonction principale (main)
 */
void __attribute__ ((constructor)) print_first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
