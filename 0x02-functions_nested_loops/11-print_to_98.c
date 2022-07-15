#include "main.h"
#include <stdio.h>

/**
*print_to_98- prints all natural numbers from n to 98,
*followed by a new line.
*@n: the first number that passed to the function
*/

void print_to_98(int n)

{


if (n == 98)
{
printf("%d\n", n);
}
else
if (n < 98)
{
printf("%d, ", n);
n++;
}

else
if (n > 98)
{
printf("%d, ", n);
n--;
}

printf("\n");

}
