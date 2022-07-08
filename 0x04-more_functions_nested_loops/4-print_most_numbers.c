#include "main.h"

/**
 * print_most_numbers- prints the numbers, from 0 to 9,
 * except 2 and 4;
 * followed by a new line
 */

void print_most_numbers(void)
{

int h;

h = 0;
while (h < 10)

{
if (h != 2 && h != 4)
{
_putchar (h + '0');
}

h++;
}

_putchar('\n');
}
