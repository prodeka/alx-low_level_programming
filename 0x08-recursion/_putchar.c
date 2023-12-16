#include <unistd.h>

/**
 * _putchar - Affiche un caractère sur la sortie standard
 * @c: Le caractère à afficher
 *
 * Return: Le nombre de caractères affichés avec succès (1 en général)
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

