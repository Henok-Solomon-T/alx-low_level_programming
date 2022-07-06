#include "main.h"

/**
*print_alphabet_x10-  prints 10 times the alphabet, in lowercase;
*followed by a new line.
*/

void print_alphabet_x10(void)
{

char h;
int n;

for (n = 0; n < 10; n++)
{
for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar('\n');
}
}
