#include "main.h"

/**
 * _atoi-  a function that convert a string to an integer
 * @s: String to be converted
 * Return: The converted integer
 */

int _atoi(char *s)
{

int a, b, c, len, d, digit;

a = b = c = len = d = digit = 0;
while (s[a] == '=')
len++;

for (a = 0; a < len && d == 0; a++)
{

if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (b % 2)
digit = -digit;
c = c * 10 + digit;
d = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
d = 0;
}

}
if (d == 0)
{
return (0);
}
else

return (c);
}
