#include "main.h"
#include <string.h>
/**
 * *_strncpy- copies a string
 * @src: - the source or first string
 * @dest: destination or the second string
 * @n: number or size  of bytes to copy
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0;

for (a = 0; a < n && src[a] != '\0'; a++)
dest[a] = src[a];
for ( ; a < n; a++)
dest[a] = '\n';

strncpy(dest, src, n);
return (dest);
}
