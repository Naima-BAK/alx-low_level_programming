#include "main.h"
#include <stdlib.h>

/**
* _count - count the number of words in a string.
* @str: string to evaluate
*
* Return: number of words
*/
int _count(char *str)
{
int i, j, k;
j = 0;
k = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
j = 0;
}
else if (j == 0)
{
j = 1;
k++;
}
}
return (k);
}

/**
* **strtow - splits a string into words
*
* @str: string.
*
* Return: pointer to an array of strings.
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int i, j, k, size, words, start, end;
size = 0;
j = 0;
k = 0;
while (*(str + size))
size++;
words = _count(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i <= size; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (j)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (j + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - j;
k++;
j = 0;
}
}
else if (j++ == 0)
start = i;
}
matrix[k] = NULL;
return (matrix);
}
