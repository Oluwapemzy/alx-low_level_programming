#include "main.h"
#include <string.h>
/**
 *_strchr- uses strchr
 *@s: type char
 *@c: type char
 *Return:returns s
 */
char *_strchr(char *s, char c)
{
s = strchr(s, c);
return (s);
}
