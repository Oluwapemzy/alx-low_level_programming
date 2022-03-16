#include "main.h"
/**
 *print_sign- print sign of number
 *@n: integer
 *Return: type int
 */
int print_sign(int n)
{
int valu;
if (n > 0)
{
valu = 1;
_putchar('+');
}
else if (n == 0)
{
valu = 0;
_putchar('0');
}
else
{
valu = -1;
_putchar('-');
}
return (valu);
}
