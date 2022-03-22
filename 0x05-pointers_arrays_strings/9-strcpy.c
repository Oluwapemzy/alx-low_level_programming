#include "main.h"
#include <string.h>
/**
 *_strcpy- copoes string into another
 *@dest: detination type char
 *@src: source of copy, type char
 *Return: return destination, type char
 */
char *_strcpy(char *dest, char *src)
{
dest = strcpy(dest, src);
return (dest);
}
