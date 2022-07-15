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
printf("%d\n");

for ( n = 0; n <= 98; n++)
{
printf("%d, ", n);
Printf("\n");
}
 
for (n = 111; n >= 98; --n)
{
printf("%d, ", n);
printf("\n");
}

for (n = 81; n <= 98; n++)
{
printf("%d, ", n);
printf("\n");
}

for (n = -10; n <= 98; n++)
{
printf("%d, ", n);
printf("\n");
}

}
