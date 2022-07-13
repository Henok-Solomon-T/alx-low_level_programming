#include "main.h"

/**
 * *_strcat- a function that concatenates two strings
 * @src: the first or to be appended string
 * @dest: the second or to be overwitten string
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{

int h, t;

h = 0;
while (dest[h] != '\0')
h++;

for (t = 0; src[t] != '\0'; t++)
{
dest[h] = src[t];
h++;
}

dest[h] = '\0';

return (dest);

}
