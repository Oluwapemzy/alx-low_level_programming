#include "main.h"
#include <ctype.h>                                /**
 *_isalpha - check code
 *@c : integer                                     *Return: type int
 */
int _isalpha(int c)
{
int val;
if (isalpha(c))
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
