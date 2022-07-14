#include "main.h"
#include <string.h>
/**
 * *_strncat- concatenates two strings
 * @dest: destination or the second string
 * @src: source or first string
 * @n: number of bytes of str to concatenate.
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

int a, k;

a = 0;
k = 0;
while (dest[a] != '\0')
a++;


while (src[k] != '\0' && k < n)
{
dest[a] = src[k];
a++;
k++;
}

dest[a] = '\0';

return (dest);
}
