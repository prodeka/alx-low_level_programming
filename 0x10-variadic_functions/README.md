# Projet 0. Beauty is variable, ugliness is constant

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
