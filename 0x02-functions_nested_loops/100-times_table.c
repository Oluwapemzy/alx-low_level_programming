#include "main.h"
/**
 *print_times_table-print time table
 *@n:integer
 *Return: void
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
}
else
{
int loop1, loop2, d;
for (loop1 = 0; loop1 <= n; loop1++)
{
for (loop2 = 0; loop2 <= n; loop2++)
{
d = loop1 * loop2;
if ((d / 10) > 0)
{
_putchar((d / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((d % 10) + '0');
if (loop2 < n)
{
_putchar(',');
_putchar(' ');
}
if (loop2 == n)
{
_putchar('\n');
}
}
_putchar('\n');
}
}
}
