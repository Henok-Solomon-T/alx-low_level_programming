#include "main.h"

/**
 * print_numbers- prints the numbers, from 0 to 9,
 * followed by a new line
 */

void print_numbers(void)
{

int h;

h = 0;
while (h < 10)
{
_putchar (h + '0');

h++;
}
_putchar('\n');
}
