#include "main.h"
/**
*print_last_digit-  prints the last digit of a number;
*@z: last digit of the number that checked
*Return: the value of the last digit
*/

int print_last_digit(int z)
{

int i;

if (z < 0)
z = -z;

i = n % 10;

if (i < 0)
i = -i;

_putchar(i + '0');

return (i);
}
