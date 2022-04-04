#include "main.h"
#include <ctype.h>
/**
 * _isdigit- check if chatacter is isalpha
 *@c : integer
 *Return: type int
 */
int _isdigit(int c)
{
int val;
if (isdigit(c))
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
