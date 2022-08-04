#include "variadic_functions.h"

/**
 * print_strings- prints numbers, followed by a new line.
 * @separator: separator between strings
 * @n: number of argumets
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

unsigned int x;
char *str;

va_list list;

va_start(list, n);

x = 0;
while (x < n)
{

str = va_arg(list, char *);
if (!str)
str = "(nil)";

if (!separator)
printf("%s", str);

else if (separator && x == 0)
printf("%s", str);

else
printf("%s%s", separator, str);

x++;
}

printf("\n");
}
