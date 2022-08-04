#include "variadic_functions.h"

/**
 * print_numbers- prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int x;
va_list list;

va_start(list, n);

x = 0;
while (x < n)
{

if (!separator)
printf("%d", va_arg(list, int));

else if (separator && x == 0)
printf("%d", va_arg(list, int));

else
printf("%s%d", separator, va_arg(list, int));

x++;
}

va_end(list);

printf("\n");
}
