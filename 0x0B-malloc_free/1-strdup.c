#include "main.h"
#include <stdlib.h>

/**
 * *_strdup- contains a copy of the string given as a parameter.
 * @str: string that copy for dupulicate
 * Return:  a pointer to a newly allocated space in memory if success;
 * else return NULL if if insufficient memory was available.
 */

char *_strdup(char *str)
{

char *cop;
unsigned int len, i;

if (str == NULL)
return (NULL);

for (len = 0; str[len] != '\0'; len++)

cop = malloc(sizeof(char) * (len + 1));

if (cop == NULL)
return (NULL);

i = 0;
while ((cop[i] = str[i]) != '\0')
i++;

return (cop);

}
