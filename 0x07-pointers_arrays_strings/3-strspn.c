#include "main.h"
#include <string.h>
/**
 *_strspn- uses inbuilt strspn
 *@s:initial segment
 *@accept:number of bytes
 *Return: returns s
 */
unsigned int _strspn(char *s, char *accept)
{
int len;
len = strspn(s, accept);
return (len);
}
