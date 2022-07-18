#include "main.h"

/**
 * *_memset- fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b.
 * Return: pointer to the areas s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

x = 0;
while (x < n)
{
s[x] = b;
x++;
}
return (s);
}
