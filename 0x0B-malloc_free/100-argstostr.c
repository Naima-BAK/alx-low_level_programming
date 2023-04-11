#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: integer
 * @av: string
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k, size = 0;
char *s1, *s;

/** Returns NULL if ac == 0 or av == NULL*/
if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
s = av[i];
j = 0;
while (s[j++])
{
size++;
}
size++;
}

s1 = (char *)malloc(sizeof(char) * (size + 1));
if (s1 == NULL)
{
return (NULL);
}
for (i = 0, j = 0; i < ac && j < size; i++)
{
s = av[i];
k = 0;
while (s[k])
{
s1[j] = s[k];
k++;
j++;
}
s1[j++] = '\n';
}
s1[j] = '\0';
return (s1);
}
