#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp- compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: less than 0, if s1 < s2;
 * equal to 0 if s1=s2;
 * greater than 0 if s1>s2.
 */

int _strcmp(char *s1, char *s2)
{

int result;

result = strcmp(s1, s2);

return (result);

}
