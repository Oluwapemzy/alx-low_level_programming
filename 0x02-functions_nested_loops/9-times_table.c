#include "main.h"
/**
 *times_table-print time table
 *Return: void
 */
void times_table(void)
{
int firstloop, secondloop, product;
for (firstloop = 0; firstloop <= 9; firstloop++)
{
for (secondloop = 0; secondloop <= 9; secondloop++)
{
product = firstloop * secondloop;
if ((product / 10) > 0)
{
_putchar ((product / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar ((product % 10) + '0');
if (secondloop != 9)
{
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');
}
}
