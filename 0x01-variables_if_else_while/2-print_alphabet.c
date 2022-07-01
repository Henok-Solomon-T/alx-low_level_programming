#include <stdio.h>
/**
*main- prints the alphabet in lowercase
*followed by new line
*Return: 0 iff exist else nonzero
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
