#include <stdio.h>
/**
*main- display the alphabet in lowercase,
*and then in UPPERCASE foolew by newline
*Return: 0 iff exist else nonzero
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
