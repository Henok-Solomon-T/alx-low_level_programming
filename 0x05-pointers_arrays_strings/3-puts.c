#include "main.h"

/**
 * _puts-  a function that prints a string, to stdout,
 * followed by a new line.
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
int h;

h = 0;
while (str[h] != '\0')
{
_putchar(str[h]);

h++;
}

_putchar('\n');

}
