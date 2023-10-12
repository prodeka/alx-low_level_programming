#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialiser une variable de type struct dog
* @d: nom du struct
* @name: nom du chien
* @age: l'age du chien
* @owner: nom du propriétaire du chien
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
