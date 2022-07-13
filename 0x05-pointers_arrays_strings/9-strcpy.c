#include "main.h"

/**
 * *_strcpy-  a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer which I copy the string
 * @src: string to be copied.
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

int len, a;
for (len = 0; src[len] != '\0'; len++)

a = 0;
while (a < len)
{
dest[a] = src[a];

a++;
}
dest[a] = '\0';

return (dest);
}
