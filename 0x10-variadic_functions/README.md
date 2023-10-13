# Documentation

## Projet 0. Beauty is variable, ugliness is constant

Ce projet est un fichier source en langage C qui contient une fonction appelée `sum_them_all`. Voici la structure et les fonctionnalités de ce projet :

```c
#include "variadic_functions.h"
#include <stdarg.h>
```

Ce code inclut le fichier d'en-tête "variadic_functions.h" et l'en-tête de la bibliothèque `<stdarg.h>`, qui est nécessaire pour travailler avec des fonctions variadiques.

```c
/**
 * sum_them_all - retourne la somme de tous ces parametres
 * @n: le nombre de paramètres
 * @...: les paramètres variables
 *
 * Return: Si n == 0 - 0.
 *         Sinon - la somme de tous les paramètres.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list nums;
    unsigned int index, sum = 0;

    va_start(nums, n);
```

La fonction `sum_them_all` est une fonction variadique qui calcule la somme de ses paramètres. Elle prend deux arguments :

- `n` : Le nombre de paramètres que la fonction recevra.
- `...` : Les paramètres variables. Les trois points de suspension (...) indiquent que la fonction peut accepter un nombre variable de paramètres.

La fonction commence par initialiser une liste variable `nums` à l'aide de `va_start`. Cette liste variable sera utilisée pour accéder aux paramètres variables.

```c
    for (index = 0; index < n; index++)
        sum += va_arg(nums, int);
```

Ensuite, la boucle `for` parcourt tous les paramètres variables. Pour chaque paramètre, la fonction utilise `va_arg` pour extraire la valeur du paramètre de la liste variable et l'ajoute à la variable `sum`.

```c
    va_end(nums);
```

Une fois que tous les paramètres ont été traités, la fonction termine la liste variable à l'aide de `va_end`.

```c
    return (sum);
```

Enfin, la fonction renvoie la somme de tous les paramètres.

En résumé, ce projet contient une fonction variadique `sum_them_all` qui prend un nombre variable de paramètres, les additionne tous, et renvoie la somme. Cette fonction est utile lorsque vous avez besoin d'additionner un nombre inconnu de valeurs en C.

## Projet 1. To be is to be the value of a variable

Ce projet est un fichier source en langage C qui contient une fonction appelée `print_numbers`. Voici la structure et les fonctionnalités de ce projet :

```c
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
```

Ce code inclut le fichier d'en-tête "variadic_functions.h" ainsi que les en-têtes nécessaires pour les opérations d'entrée/sortie standard et pour travailler avec des fonctions variadiques, soit `<stdio.h>` et `<stdarg.h>`.

```c
/**
* print_numbers - une fonction qui imprime des nombres
* @separator: séparateur entre les nombres
* @n: nombre d'arguments
* Return: rien
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);
```

La fonction `print_numbers` est une fonction variadique qui imprime des nombres. Elle prend trois arguments :

- `separator` : Le séparateur qui sera imprimé entre les nombres.
- `n` : Le nombre d'arguments passés à la fonction.
- `...` : Les arguments variables. Les trois points de suspension (...) indiquent que la fonction peut accepter un nombre variable de paramètres.

La fonction commence par initialiser une liste variable `args` à l'aide de `va_start`. Cette liste variable sera utilisée pour accéder aux paramètres variables.

```c
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));
        if (i != n - 1)
        {
            if (separator)
                printf("%s", separator);
        }
    }
```

Ensuite, la boucle `for` parcourt tous les paramètres variables. Pour chaque paramètre, la fonction utilise `va_arg` pour extraire la valeur du paramètre de la liste variable et l'imprime à l'aide de `printf`. Si l'index `i` n'est pas le dernier paramètre, la fonction imprime également le séparateur spécifié, à condition que `separator` ne soit pas nul.

```c
    printf("\n");
    va_end(args);
```

Une fois que tous les paramètres ont été traités et que les nombres ont été imprimés, la fonction imprime un saut de ligne pour passer à la ligne suivante, puis termine la liste variable à l'aide de `va_end`.

En résumé, ce projet contient une fonction variadique `print_numbers` qui imprime un nombre variable de nombres en utilisant un séparateur spécifié entre eux. Cette fonction est utile lorsque vous avez besoin d'imprimer plusieurs nombres avec un séparateur personnalisé en C.

## projet 2. One woman's constant is another woman's variable

Ce projet est un fichier source en langage C qui contient une fo    nction appelée `print_strings`. Voici la structure et les fonctionnalités de ce projet :

```c
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
```

Ce code inclut le fichier d'en-tête "variadic_functions.h" ainsi que les en-têtes nécessaires pour les opérations d'entrée/sortie standard et pour travailler avec des fonctions variadiques, soit `<stdio.h>` et `<stdarg.h>`.

```c
/**
* print_strings - une fonction qui imprime des chaînes de caractères
* @separator: séparateur entre les chaînes
* @n: nombre d'arguments
* Return: rien
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    char *p;

    va_start(args, n);
```

La fonction `print_strings` est une fonction variadique qui imprime des chaînes de caractères. Elle prend trois arguments :

- `separator` : Le séparateur qui sera imprimé entre les chaînes.
- `n` : Le nombre d'arguments passés à la fonction.
- `...` : Les arguments variables. Les trois points de suspension (...) indiquent que la fonction peut accepter un nombre variable de paramètres.

La fonction commence par initialiser une liste variable `args` à l'aide de `va_start`. Cette liste variable sera utilisée pour accéder aux paramètres variables.

```c
    for (i = 0; i < n; i++)
    {
        p = va_arg(args, char *);
        if (p == NULL)
        {
            printf("(nil)");
        }
        else
        {
            printf("%s", p);
        }
        if (i < n - 1)
        {
            if (separator)
                printf("%s", separator);
        }
    }
```

Ensuite, la boucle `for` parcourt tous les paramètres variables. Pour chaque paramètre, la fonction utilise `va_arg` pour extraire la valeur du paramètre de la liste variable, qui est une chaîne de caractères, puis elle l'imprime à l'aide de `printf`. Si la chaîne de caractères est nulle (c'est-à-dire `NULL`), elle imprime "(nil)" à la place. Si l'index `i` n'est pas le dernier paramètre, la fonction imprime également le séparateur spécifié, à condition que `separator` ne soit pas nul.

```c
    printf("\n");
    va_end(args);
```

Une fois que tous les paramètres ont été traités et que les chaînes de caractères ont été imprimées, la fonction imprime un saut de ligne pour passer à la ligne suivante, puis termine la liste variable à l'aide de `va_end`.

En résumé, ce projet contient une fonction variadique `print_strings` qui imprime un nombre variable de chaînes de caractères en utilisant un séparateur personnalisé entre elles. Si une chaîne est nulle, elle imprime "(nil)" à la place. Cette fonction est utile lorsque vous avez besoin d'imprimer plusieurs chaînes de caractères avec un séparateur personnalisé en C.

## 3. To be is a to be the value of a variable

Ce projet est un fichier source en langage C qui contient plusieurs fonctions pour imprimer divers types de données en fonction d'un format spécifié. Voici la structure et les fonctionnalités de ce projet :

```c
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
```

Ce code inclut le fichier d'en-tête "variadic_functions.h" ainsi que les en-têtes nécessaires pour les opérations d'entrée/sortie standard, les fonctions variadiques et les opérations de gestion de la mémoire, soit `<stdio.h>`, `<stdarg.h>` et `<stdlib.h>`.

```c
/**
* print_char - imprime un caractère
* @vargs: argument
* Return: void
*/
void print_char(va_list vargs)
{
    printf("%c", va_arg(vargs, int));
}
```

La fonction `print_char` imprime un caractère. Elle prend un argument de type `va_list`, qui est une liste variable de paramètres, et utilise `va_arg` pour extraire le caractère de cette liste et l'imprimer.

```c
/**
* print_integer - imprime un entier
* @vargs: argument
* Return: void
*/
void print_integer(va_list vargs)
{
    printf("%d", va_arg(vargs, int));
}
```

La fonction `print_integer` imprime un entier. Elle fonctionne de la même manière que `print_char`, en utilisant `va_arg` pour extraire et imprimer l'entier.

```c
/**
* print_float - imprime un nombre à virgule flottante
* @vargs: argument
* Return: void
*/
void print_float(va_list vargs)
{
    printf("%f", va_arg(vargs, double));
}
```

La fonction `print_float` imprime un nombre à virgule flottante. Elle utilise `va_arg` pour extraire et imprimer le nombre à virgule flottante de la liste variable.

```c
/**
* print_string - imprime une chaîne de caractères
* @vargs: argument
* Return: void
*/
void print_string(va_list vargs)
{
    char *ch;
    ch = va_arg(vargs, char *);
    if (ch == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("%s", ch);
}
```

La fonction `print_string` imprime une chaîne de caractères. Elle extrait la chaîne de caractères de la liste variable à l'aide de `va_arg` et l'imprime. Si la chaîne est nulle, elle imprime "(nil)".

```c
/**
* print_all - une fonction qui imprime tous les arguments
* @format: le format
* Return: void
*/
void print_all(const char * const format, ...)
{
    int i, j;
    char *str = "";
    va_list args;

    form p[] = {
        {"c", print_char},
        {"i", print_integer},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL},
    };
```

La fonction `print_all` est la fonction principale qui permet d'imprimer différents types de données en fonction du format spécifié. Elle prend un format de type chaîne de caractères (par exemple, "cis") et une liste variable d'arguments. Elle utilise un tableau `p` qui associe chaque caractère de format à la fonction appropriée pour l'imprimer.

La fonction parcourt le format caractère par caractère et, pour chaque caractère, recherche la fonction appropriée dans le tableau `p` et l'appelle pour imprimer la valeur correspondante. Elle utilise également la chaîne `str` pour gérer l'impression des séparateurs entre les valeurs.

```c
    va_start(args, format);

    i = 0;
    while (format && format[i])
    {
        j = 0;
        while (p[j].f)
        {
            if (*(p[j].f) == format[i])
            {
                printf("%s", str);
                p[j].func(args);
                str = ", ";
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
```

La fonction utilise `va_start` pour initialiser la liste variable d'arguments, puis parcourt le format caractère par caractère. Pour chaque caractère du format, elle recherche la fonction appropriée dans le tableau `p` et l'appelle pour imprimer la valeur correspondante. Elle gère également l'impression des séparateurs entre les valeurs en utilisant la chaîne `str`.

Enfin, la fonction termine la liste variable d'arguments avec `va_end` et imprime un saut de ligne pour passer à la ligne suivante.

En résumé, ce projet contient des fonctions pour imprimer différents types de données en fonction d'un format spécifié. La fonction `print_all` est la fonction principale qui gère l'impression en utilisant les fonctions spécifiques pour chaque type de données.
