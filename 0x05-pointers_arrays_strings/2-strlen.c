#include "main.h"

/**
 * _strlen- a function that returns the length of a string
 * @s: string pointer to evaluate to passed to the function
 * Return: the string lenght
 */

int _strlen(char *s)

{

int a;
a = 0;
while (s[a] != '\0')
{
a++;
}

return (a);

}
