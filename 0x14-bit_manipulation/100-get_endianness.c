#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 or 1.
 */
int get_endianness(void)
{
int i;
char *str;

i = 1;
str = (char *)&i;

return (*str);
}
