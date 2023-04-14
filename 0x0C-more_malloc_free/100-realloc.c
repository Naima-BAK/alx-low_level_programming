#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: pointer
 * @old_size: integer
 * @new_size: integer
 * Return: NULL or Pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, size;
char *p0 = ptr;
size = new_size;

if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}

else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
{
return (ptr);
}

p = malloc(new_size);

if (p == NULL)
{
return (NULL);
}

if (new_size > old_size)
{
size = old_size;
}

for (i = 0; i < size; i++)
{
p[i] = p0[i];
}
free(ptr);
return (p);
}
