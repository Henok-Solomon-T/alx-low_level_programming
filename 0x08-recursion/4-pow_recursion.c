#include "main.h"

/**
 * _pow_recursion-  returns the value of x raised to the power of y
 * @x: the value to raise or base number
 * @y: the power or exponent number
 * Return: The result or x power of y; If y is lower than 0,
 * the function should return -1.
 */

int _pow_recursion(int x, int y)
{

while (y < 0)
return (-1);

while (y == 0)
return (1);

return (x * _pow_recursion(x, --y));

}
