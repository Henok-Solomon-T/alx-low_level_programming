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
int len, h;

len = strlen(str);

h = 5;
while (h < len)

{
_putchar(str[h]);
h += 1;
}

_putchar('\n');

}
