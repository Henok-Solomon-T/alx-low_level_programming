#include "main.h"
#include <stdio.h>

/**
 * main-   prints the number of arguments it received.
 * @argc: arguments number
 * @argv: array of arguments
 * Return: 0 if exit else nonzero
 */

int main(int argc, char *argv[])
{

int x;

x = 0;
while (x < argc)
{

printf("%s\n", argv[x]);

x++;
}

return (0);
}
