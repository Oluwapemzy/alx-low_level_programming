#include "main.h"
#include <string.h>
/**
 *_memset - type char
 *@s: param to return
 *@b: what to fill
 *@n:number of bytes
 *Return: return type char
 */
char *_memset(char *s, char b, unsigned int n)
{
s = memset(s, b, n);
return (s);
}
