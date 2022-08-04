#include "function_pointers.h"

/**
 * int_index- searches for an integer
 * @array: array to search in
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be
 * used to compare values.
 * Return: the index of the first element for
 * which the cmp function does not return 0, or
 * If size <= 0, return -1 or
 * If no element matches, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

int a;

if (array && cmp)
{

for (a = 0; a < size; a++)
{
if (cmp(array[a]) != 0)
return (a);
}
}

return (-1);
}
