#include "main.h"
/**
 *times_table-print time table
 *Return: void
 */
void times_table(void)
{
	int rone, cone, d;

	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			d = (rone * cone);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
/*void times_table(void)
{
int firstloop, secondloop, product;
for (firstloop = 0; firstloop <= 9; firstloop++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (secondloop = 0; secondloop <= 9; secondloop++)
{
product = firstloop * secondloop;
if ((product / 10) > 0)
{
_putchar ((product / 10));
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
}*/
