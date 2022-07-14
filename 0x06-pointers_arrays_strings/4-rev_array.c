#include "main.h"

/**
 * reverse_array- reverses the content of an array of integers.
 * @n: is the number of elements of the array
 * @a: array to be reversed
 */

void reverse_array(int *a, int n)
{
int x, y, tmp;

y = n - 1;
for (x =  0; x < n / 2; x++)
{
tmp = a[x];
a[x] = a[y];
a[y--] = tmp;
}
}
