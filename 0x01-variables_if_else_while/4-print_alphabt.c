#include <stdio.h>

/**
 *main- print the alphabet in lowercase
*then new line except e and q
*Return: 0 if true
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
