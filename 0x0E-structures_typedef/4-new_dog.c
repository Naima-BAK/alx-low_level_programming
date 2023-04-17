#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int name_size, owner_size, i;
dog_t *dog;
if (name == NULL || owner == NULL || age <= 0)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (name_size = 0; name[name_size]; name_size++)
{
;
name_size++;
}
dog->name = malloc(name_size *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < name_size; i++)
{
dog->name[i] = name[i];
}
dog->age = age;
for (owner_size = 0; owner[owner_size]; owner_size++)
{
;
owner_size++;
}
dog->owner = malloc(owner_size *sizeof(char));
if (dog->owner == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < owner_size; i++)
{
dog->owner[i] = owner[i];
}
return (dog);
}
