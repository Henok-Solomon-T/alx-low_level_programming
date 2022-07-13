#include "main.h"
/**
 * print_triangle- a function that prints a triangle,
 * followed by a new line.
 * @size: is the size of triangle.
 */

void print_triangle(int size)
{

if (size <= 0)
_putchar('\n');

else
{
int h, t;

for (h = 1; h <= size; h++)
{

t = h;
while (t < size)
{
_putchar(' ');
t++;
}

t = 1;
while (t <= h)
{
_putchar('#');
t++;
}
_putchar('\n');
}
}
}
