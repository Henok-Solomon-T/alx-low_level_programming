#include "main.h"
/**
*times_table- prints the 9 times table,
*starting with 0
*/
void times_table(void)
{
int h, t, s;

for (h = 0; h < 10; h++)
{
for (t = 0; t < 10; t++)
{
s = t * h;
if (t == 0)
{
_putchar(s + '0');
}
if (s < 10 && t != 0)
{
_putchar(',');
_putchar(' ');
_putchar(s + '0');
}
else if (s >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((s / 10) + '0');
_putchar((s % 10) + '0');
}
}
_putchar('\n');
}
}
