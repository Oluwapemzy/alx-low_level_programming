#include "main.h"
/**
 *read_textfile- reads a text file and prints it
 * to standard output
 *@filename: path of file
 *@letters: number of characters to print
 *Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t rd, wr;
char *buf;
if (!filename)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
buf = malloc(sizeof(char) * letters);
if (!buf)
{
return (0);
}
rd = read(fd, buf, letters);
if (rd < 0)
{
free (buf);
return (0);
}
buf[letters] = '\0';
close(fd);
wr = write(STDOUT_FILENO, buf, rd);
if (wr < 0)
{
free(buf);
return (0);
}
free(buf);
return (wr);
}
