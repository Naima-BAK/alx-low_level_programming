#include "main.h"

/**
 * _abs 
 * @i: integer
 * Return: absolute value or 0
 */
int _abs(int i)
{
if (i > 0)
{
return (i);
}
if (i < 0)
{
return (i * -1);
}
else
{
return (0);
}
}
