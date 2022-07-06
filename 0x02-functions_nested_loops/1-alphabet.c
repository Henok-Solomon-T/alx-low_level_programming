#include "main.h"

/**
*print_alphabet- prints the alphabet, in lowercase,
*followed by a new line
*/

void print_alphabet(void)
{
int h;
h = 'a';
while (h <= 'z')
{
_putchar(h);
h++;
}
_putchar('\n');
}
