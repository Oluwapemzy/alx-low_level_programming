#include "main.h"
#include <ctype.h>
/**
 *_isupper - check code
 *@c : integer
 *Return: type int
 */
int _isupper(int c)
{
int value;
if (isupper(c))
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
