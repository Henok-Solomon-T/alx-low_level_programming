#include "main.h"
/**
 * print_square- a function that prints a square,
 * followed by a new line.
 * @size: is the size of square
 */

void print_square(int size)
{

if (size <= 0)
_putchar('\n');

else
{
int h, t;

h = 0;
while (h < size)
{
for (t = 0; t < size; t++)
{
_putchar('#');
}

h++;

_putchar('\n');
}
}
}
