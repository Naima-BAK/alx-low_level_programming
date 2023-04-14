#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 *
 * @nmemb: integer
 * @size: integer
 *
 * Return: NULL or a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

str = malloc(nmemb * size);

if (str == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
str[i] = 0;
}
return (str);
}
