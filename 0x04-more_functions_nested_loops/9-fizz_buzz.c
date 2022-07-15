#include <stdio.h>
#include <string.h>


/**
 * main- prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 */

void  main()
{

int z;
char ch3, ch5, ch35;

ch3 = "Fizz";
ch5 = "Buzz";
ch35 = "FizzBuzz";


for (z = 0; z <= 100; z++)
{


if (z % 3 != 0 && z % 5 != 0)
{
printf("%d ", z);
}
else if (z % 3 == 0 && z % 5 != 0)
{
printf("%s ", ch3);
}

else if (z % 3 != 0 && z % 5 == 0)
{
printf("%s ", ch5);
}

else if (z % 3 == 0 && z % 5 == 0)
{
printf("%s ", ch35);
}

}
}
