#include "main.h"
#include <string.h>

/**
 * puts2-  prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: string to print the characters
 */

void puts2(char *str)
{
int len, h;

len = strlen(str);

h = 0;
while (h < len)

{
_putchar(str[h]);
h += 2;
}
_putchar('\n');

}
