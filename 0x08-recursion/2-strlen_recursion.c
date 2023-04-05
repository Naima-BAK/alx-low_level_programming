#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: string
 *
 * Return: string.
 */
int _strlen_recursion(char *s)
{
int size = 0;

if (*s)
{
size++;
size += _strlen_recursion(s + 1);
}
return (size);
}
