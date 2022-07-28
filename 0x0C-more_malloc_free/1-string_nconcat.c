#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat- concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to conca. to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *ch;
unsigned int i, j, len1, len2;

len1 = 0;
len2 = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;

if (n < len2)
ch = malloc(sizeof(char) * (len1 + n + 1));
else
ch = malloc(sizeof(char) * (len1 + len2 + 1));


if (!ch)
return (NULL);

for (i = 0; i < len1; i++)
ch[i] = s1[i];

j = 0;
while (n < len2 && i < (len1 + n))
ch[i++] = s2[j++];

while (n >= len2 && i < (len1 + len2))
ch[i++] = s2[j++];

ch[i] = '\0';

return (ch);


}
