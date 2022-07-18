#include "main.h"

/**
 * print_chessboard- a function that prints the chessboard.
 * @a: two dimensional or  2D array to print
 */

void print_chessboard(char (*a)[8])

{

int h, t;


for (h = 0; h < 8; h++)
{

for (t = 0; t < 8; t++)
{

_putchar(a[h][t]);
}

_putchar('\n');
}

}
