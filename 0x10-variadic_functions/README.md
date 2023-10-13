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
