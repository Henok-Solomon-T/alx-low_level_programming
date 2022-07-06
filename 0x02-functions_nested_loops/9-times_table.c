#include "main.h"
/**
*times_table- prints the 9 times table,
*starting with 0
*/
void times_table(void)
{
int h, t, s;

h = 0;
while (h < 10)

{
t = 0;
while (t < 10)
{
s = t *h;
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
t++;
}
h++;
}
_putchar('\n');
}
