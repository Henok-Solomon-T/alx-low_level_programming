#include "main.h"

/**
 * print_line- draw a straight line
 * @n: number of times should printed
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else 
{
int h;
h = 1;
while (h <= n)
{
_putchar('_');
h++;
}
_putchar('\n');
}
}
