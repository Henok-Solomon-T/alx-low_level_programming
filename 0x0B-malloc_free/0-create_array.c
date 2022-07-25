#include <stdlib.h>
#include "main.h"

/**
 * *create_array- creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array to create
 * @c: char to initialize the array c
 * Return: if success a pointer to the array else
 * NULL.
 */

char *create_array(unsigned int size, char c)
{

char *r;
unsigned int i = 0;

if (size == 0)
return (NULL);

r = (char *) malloc(sizeof(char) * size);

if (r == NULL)
return (0);

while (i < size)
{
*(r + i) = c;
i++;
}

*(r + i) = '\0';

return (r);

}
