#include "main.h"
/**
 *_pow_recursion- finds x raise to power y
 *@x: base that is subscript
 *@y: power that is superscript
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return  (1);
}
return (x * _pow_recursion(x, y - 1));
}
