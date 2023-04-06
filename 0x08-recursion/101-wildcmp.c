#include "main.h"

/**
 * check - compares two strings
 * @s1: string
 * @s2: string
 * @i: integer
 * @j: integer
 * Return: integer
 */
int check(char *s1, char *s2, int i, int j)
{
if (s1[i] == '\0' && s2[j] == '\0')
{
return (1);
}
if (s1[i] == s2[j])
{
return (check(s1, s2, i + 1, j + 1));
}
if (s1[i] == '\0' && s2[j] == '*')
{
return (check(s1, s2, i, j + 1));
}
if (s2[j] == '*')
{
return (check(s1, s2, i + 1, j) || check(s1, s2, i, j + 1));
}
return (0);
}
/**
 * wildcmp - compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @s1: string
 * @s2: string
 *
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
return (check(s1, s2, 0, 0));
}
