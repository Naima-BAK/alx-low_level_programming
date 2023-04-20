#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 * Return: index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size > 0 && array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
i++;
}
}
return (-1);
}
