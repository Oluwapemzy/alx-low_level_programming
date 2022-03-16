#include "main.h"
/**
 *print_last_digit- print last digit
 *@x: integer
 *Return: type integer
 */
int print_last_digit(int x)
{
int y, e;

	y = x % 10;
	if (y < 0)
	{
		y = -y;
	}
	e = '0' + y;
	_putchar(e);
	return (y);
}
