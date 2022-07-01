#include <stdio.h>
/**
*main- prints the number 00 to 99
*Return: 0 if success else nonzero
*/

int main(void)
{
int x, y;
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
putchar(x);
putchar(y);
if (x != 57 || y != 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
