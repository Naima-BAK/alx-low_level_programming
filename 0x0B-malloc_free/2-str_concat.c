#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int i, j, size1, size2, size;
size1 = 0;
size2 = 0;

if (s1 != NULL)
{
i = 0;
while (s1[i++] != '\0')
{
size1++;
}
}
if (s2 != NULL)
{
i = 0;
while (s2[i++] != '\0')
{
size2++;
}
}
size = size1 + size2;
str = (char *)malloc(sizeof(char) * (size + 1));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
str[i] = s1[i];
}
for (j = 0; j < size2; j++, i++)
{
str[i] = s2[j];
str[size] = '\0';
}
return (str);
}
