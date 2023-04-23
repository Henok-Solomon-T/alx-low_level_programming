#include "main.h"

/**
 * append_text_to_file- append text to file at the end
 * @filename: A pointer to the name of the file to create.
 * @text_content: content to append into file or
 * A pointer to a string to write to the file.
 *
 * Return: fails -1, Otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int h, s, len = 0;

if (!filename)
return (-1);

h = open(filename, O_WRONLY | O_APPEND);
if (h < 0)
return (-1);

if (text_content)
{
while (text_content[len])
len++;

s = write(h, text_content, len);
if (s != len)

return (-1);
}
close(h);
return (1);
}
