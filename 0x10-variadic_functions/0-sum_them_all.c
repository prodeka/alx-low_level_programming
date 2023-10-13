#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - retourne la somme de tous ces parametres
 * @n: le nombre de parametres
 * @...: les parametres variables
 *
 * Return: Si n == 0 - 0.
 *         Sinon - la somme de tous les parametres.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;

va_start(nums, n);

for (index = 0; index < n; index++)
sum += va_arg(nums, int);

va_end(nums);

return (sum);
}
