#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the standard outputs
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t r, w;
int o;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

o = open(filename, O_RDONLY);
if (o == -1)
return (0);

r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);
if (r == -1 || w == -1)
{
free(buffer);
close(o);
return (0);
}

close(o);

return (r);
}
