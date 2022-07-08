#include "main.h"
#include <stdio.h>

/**
 * main- checks the code
 * Return: Always 0.
 */
int main(void)
{

char c;

c = 'A';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
return (0);

}
