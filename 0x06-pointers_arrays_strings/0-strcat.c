#include "main.h"
#include <string.h>
/**
 *_strcat- concats two strings together
 *@dest: type char, destination of concat
 *@src: type char, atring to be appended
 *Return: char return type
 */
char *_strcat(char *dest, char *src)
{
dest = strcat(dest, src);
return (dest);
}
