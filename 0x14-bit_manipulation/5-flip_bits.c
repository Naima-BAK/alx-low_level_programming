#include "main.h"

/**
 * flip_bits - returns the number of bits you would need.
 * to flip to get from one number to another.
 * @n: number.
 * @m: number.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int excuOr = n ^ m;
unsigned long int num_bits = 0;

while (excuOr > 0)
{
num_bits += (excuOr & 1);
excuOr >>= 1;
}

return (num_bits);
}
