#include "main.h"

/**
*print_to_98- prints all natural numbers from n to 98,
*followed by a new line.
*@n: the first number that passed to the function
*/

void print_to_98(int n)
{

int z;
z = n % 10;

if ((n >= 0) && (n != 98))
{
_putchar(n);
_putchar(',');
_putchar(' ');
_putchar('\n');
n++;
}

else if (z == 98)
{
z = -z;
_putcar(z + '0');
return (z);
}
}
