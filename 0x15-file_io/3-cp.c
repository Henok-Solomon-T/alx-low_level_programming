#include "main.h"
/**
 * main- copies the file content to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
int fd_r, fd_w, h, t, r;
char buff[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_r = open(argv[1], O_RDONLY);
if (fd_r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((r = read(fd_r, buff, BUFSIZ)) > 0)
{
if (fd_w < 0 || write(fd_w, buff, r) != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_r);
exit(99);
}
}
if (r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
h = close(fd_r);
t = close(fd_w);
if (h < 0 || t < 0)
{
if (h < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
if (t < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
exit(100);
}
return (0);
}
