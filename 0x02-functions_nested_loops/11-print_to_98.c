#include "main.h"

/**
*print_to_98- prints all natural numbers from n to 98,
*followed by a new line.
*@n: the first number that passed to the function
*/

void print_to_98(int n)

{
for (n = 0; n <= 98; n++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}

if (n < 0)
n = -n;
_putchar(n);
_putchar(',');
_putchar(' ');
_putchar(-n);

for (n = 0; n >= 98; n++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
