#include "main.h"

/**
 * string_toupper- changes all lowercase letters
 * of a string to uppercase.
 * @s: string to change or modify
 * Return: The  changed string
 */

char *string_toupper(char *s)
{

int h;

h = 0;
while (s[h] != '\0')
{
if (s[h] >= 'a' && s[h] <= 'z')
s[h] = s[h] - 32;
h++;
}

return (s);

}
