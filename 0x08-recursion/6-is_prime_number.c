#include "main.h"

/**
 * is_prime_number-  returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: A number to be checked
 * Return: 1 if it is prime otherwise 0.
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_original_prime(n, n - 1));
}

/**
 * _original_prime- checks the number is or not prime
 * @n: the number to be checked
 * @x: iterator
 * Return: the result.
 */


int _original_prime(int n, int x)
{


if (x == 1)
return (1);

if ((n % x == 0) && (x > 0))
return (0);

return (_original_prime(n, x - 1));

}
