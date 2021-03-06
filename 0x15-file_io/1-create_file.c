#include "main.h"
/**
 *create_file- creates a file
 *@filename: namr of the file to create
 *@text_content: is a NULL terminated string
 *to write to the file
 *Return: 1 if successful and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
int fd, len = 0, wr;
fd = open(filename, O_CREAT | O_RDWR | 0_TRUNC, 0600);
if (!filenamr || fd < 1)
{
return (-1);
}
if (text_content)
{
while (text_content[len])
{
len++;
}
wr = write(fd, text_content, len);
}
close(fd);
return (1);
}
