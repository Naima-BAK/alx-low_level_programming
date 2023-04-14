#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - s1_s2_concatenates two strings.
 * @s1: string.
 * @s2: string.
 * @n: integer.
 *
 * Return: NULL or a pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size, i;
char *s1_s2_concat;
size = n;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i]; i++)
{
size++;
}

s1_s2_concat = malloc(sizeof(char) * (size + 1));

if (s1_s2_concat == NULL)
return (NULL);

size = 0;

for (i = 0; s1[i]; i++)
{
s1_s2_concat[size++] = s1[i];
}
for (i = 0; s2[i] && i < n; i++)
{
s1_s2_concat[size++] = s2[i];
}

s1_s2_concat[size] = '\0';
return (s1_s2_concat);
}
