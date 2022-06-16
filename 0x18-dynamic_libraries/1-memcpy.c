#include "main.h"
#include <string.h>
/**
 *_memcpy-returns s
 *@dest: destination
 *@src:source of copy
 *@n: number of bytes
 *Return: returns type char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
dest = memcpy(dest, src, n);
return (dest);
}
