#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory...
 *
 * @str: string
 * Return: a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *str_copy;
int i, size = 0;

if (str == NULL)
{
return (NULL);
}
while (str[size] != '\0')
{
size++;
}
str_copy = (char *)malloc((sizeof(char) * size) +1);
if (str_copy == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str_copy[i] = str[i];
str_copy[size] = '\0';
}
return (str_copy);
}
