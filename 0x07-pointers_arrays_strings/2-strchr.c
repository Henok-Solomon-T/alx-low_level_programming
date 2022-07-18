#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strchr- locates a character in a string
 * @s: string to search
 * @c: char to find
 * Return: a pointer to the first occurence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)

{

int h;

while (1)
{

h = *s++;

if (h == c)
{
return(s - 1);
}

if (h == 0)
{
return(NULL);
}

}

}
