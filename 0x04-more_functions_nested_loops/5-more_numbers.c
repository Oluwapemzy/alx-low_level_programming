#include "main.h"
/**
 *more_numbers-print 0to 14 10 times
 *Return: void
 */
void more_numbers(void)
{
int ten, fouteen;
for (ten = 0; ten <= 10; ten++)
{
for (fouteen = 0; fouteen <= 14; fouteen++)
{
if (fouteen >= 10)
{
_putchar(fouteen / 10 + '0');
}
_putchar(fouteen % 10 + '0');
}
_putchar('\n');
}
}
