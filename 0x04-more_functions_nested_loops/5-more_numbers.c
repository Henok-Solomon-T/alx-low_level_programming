#include "main.h"

/**
 * more_numbers- prints 10 times the numbers,
 * from 0 to 14;
 * followed by a new line
 */

void more_numbers(void)
{

int h, t;

for (h = 0; h < 10; h++)
{
for (t = 0; t < 15; t++)
{

if (t >= 10)
_putchar((t / 10) + '0');
_putchar((t % 10) + '0');
}
_putchar('\n');
}
}
