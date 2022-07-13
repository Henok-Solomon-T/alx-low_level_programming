#include <stdio.h>
#include "main.h"

/**
 * print_array- prints n elements of an array of integers,
 * followed by a new line
 * @n: n is the number of elements of the array to be printed
 * @a: array to be printed;
 */

void print_array(int *a, int n)
{

int h;

h = 0;
while (h < n)
{

if (h == 0)
{
printf("%d", a[h]);
else
{
printf(", %d", a[h]);
}
}

h++;
}

printf("\n");
}
