#include "main.h"
#include <string.h>
/**
 *_strpbrk- return pointer that matches accept
 *@s:pointerto return
 *@accept:what to check if matches
 *Return: return type char
 */
char *_strpbrk(char *s, char *accept)
{
s = strpbrk(s, accept);
return (s);
}
