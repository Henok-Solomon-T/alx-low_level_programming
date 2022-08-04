#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- executes a function given as
 * a parameter on each element of an array.
 * @array: array to iterate over
 * @size: size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;

if (!array || !action)
return;

k = 0;
while (k < size)
{
action(array[k]);
k++;
}

}
