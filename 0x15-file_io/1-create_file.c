#include "main.h"

/**
 * create_file - Creates a file and fills it with text
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: fails -1, Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
int h, s, len = 0;

if (!filename)
return (-1);

h = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (h < 0)
return (-1);

if (text_content)
{
for (len = 0; text_content[len]; len++)

s = write(h, text_content, len);
if (s != len)

return (-1);
}
close(h);
return (1);
}
