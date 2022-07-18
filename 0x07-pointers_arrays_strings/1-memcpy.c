#include "main.h"

/**
 * *_memcpy- copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of times to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

x = 0;
while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
