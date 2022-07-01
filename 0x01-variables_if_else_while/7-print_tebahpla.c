#include <stdio.h>
/**
*main- printslowercase alphabet in reverse
*Return: 0 if yes else nonzero
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
