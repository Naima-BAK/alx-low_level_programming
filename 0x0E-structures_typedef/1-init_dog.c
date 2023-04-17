#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 *
 * @d: pointer to the structure
 * @name: string name of dog
 * @age: float age of dog
 * @owner: string owner of dog
 * Return: void.
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
