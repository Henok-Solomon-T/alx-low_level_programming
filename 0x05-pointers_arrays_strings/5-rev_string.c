#include "main.h"
/**
 * rev_string- A function that reverse a string,
 * @s: a string to be reversed.
 */

void rev_string(char *s)
{

char tmp;
int a, len, len1;

len = 0;
len1 = 0;

while (s[len] != '\0')
{

len++;
}

len1 = len - 1;

a = 0;

while (a < len / 2)
{
tmp = s[a];
s[a] = s[len1];
s[len1--] = tmp;

a++;

}
}
