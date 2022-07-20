#include "main.h"


/**
 * _sqrt_recursion-  returns the natural square root of a number.
 * @n: a given number sqrt result; If n does not have
 * a natural square root, the function should return -1.
 * Return: the sqrt result of given number.
 */

int _sqrt_recursion(int n)
{

return (_original_sqrt(n, 1));

}


/**
 *_original_sqrt- return the sqrt of a number
 *@n: number
 *x: iterator
 *Return: the sqrt
 */

int _original_sqrt(int n, int x)
{

int y = x * x;

if (y > n)
return (-1);

if (y == n)
return (x);

return (_original_sqrt(n, x + 1));

}

