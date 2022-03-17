#include "main.h"
/**
 *print_line-print straight line
 *@n: integer
 *Return: void
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int s;
for (s = 0; s <= n; s++)
{
_putchar('_');
}
_putchar('\n');
}
}
