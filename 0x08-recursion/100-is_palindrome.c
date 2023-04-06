#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
if (s[0] != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}

/**
 * check - check if s is palindrome.
 * @s: string
 * @i: integer
 * @j: integer
 * Return: integer
 */
int check(char *s, int i, int j)
{
if (s[i] == s[j])
{
if (i > j / 2)
{
return (1);
}
else
{
return (check(s, i + 1, j - 1));
}
}
else
{
return (0);
}
}

/**
 * is_palindrome - check if s is palindrome
 * @s: string.
 *
 * Return: integer.
 */

int is_palindrome(char *s)
{
return (check(s, 0, _strlen_recursion(s) - 1));
}
