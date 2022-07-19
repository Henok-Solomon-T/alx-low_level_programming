#include "main.h"

/**
 * leet- encodes a string into 1337.
 * @s: String to be encoded
 *
 * Return: The encoded result.
 */
char *leet(char *s)
{

int x, y;

char *a = "aAeEoOtTlL";
char *b = "4433007711";

for (x = 0; s[x] != '\0'; x++)
{

for (y = 0; y < 10; y++)
{

if (s[x] == a[y])
{
s[x] = b[y];
}
}
}
return (s);
}
