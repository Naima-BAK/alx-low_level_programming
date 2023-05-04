#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int.
 * @b: pointer.
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int uint_number = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
if (b[i] == '0')
{
uint_number = (uint_number << 1) | 0;
}
else if (b[i] == '1')
{
uint_number = (uint_number << 1) | 1;
}
else
{
return (0);
}

i++;
}

return (uint_number);
}
