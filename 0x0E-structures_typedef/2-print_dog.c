#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - a function that prints a struct dog
* @d: pointer to the struct
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %f\n", (d->age != NULL) ? d->age : 0.000000);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}