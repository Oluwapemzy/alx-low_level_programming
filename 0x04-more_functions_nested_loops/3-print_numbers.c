#include "main.h"
/**
 *print_numbers-entry point
 *Return: void
 */
void print_numbers(void)
{
int start;
for (start = 0; start <= 9; start++)
{
_putchar (start + '0');
}
_putchar ('\n');
}
