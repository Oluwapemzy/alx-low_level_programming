#include "main.h"
/**
 *print_last_digit- print last digit
 *@x: integer
 *Return: type integer
 */
int print_last_digit(int x)
{
int last_digit;
last_digit = x % 10;
_putchar(last_digit);
return (last_digit);
}
