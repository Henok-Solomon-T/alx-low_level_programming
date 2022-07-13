#include "main.h"
#include <string.h>

/**
 * puts_half-  prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: string to print the characters
 */

void puts_half(char *str)
{
int h, n, k;

h = strlen(str);
if (h % 2 == 0)

{
n = h / 2;
}
else
{
n = ((h / 2) + 1);
}

k = n;
while (k < h)

{
_putchar(str[k]);
k++;
}

_putchar('\n');

}
