#include "main.h"

/**
 * print_diagonal- draw diagonal line
 * @n: number of times should printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else 
{
int h, t;
for (h = 0; h < n; h++)
{
for (t =0; t < n; t++)
{
	if (t == h)

_putchar('\\');
else if (t < h)
_putchar(' ');
}
_putchar('\n');
}
}
}
