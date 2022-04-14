#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_numbers - print numbers passed by arguments
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: void type
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
if (separator == NULL)
{
return;
}
va_start(ap, n);
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d", va_arg(ap, int));
putchar('\n');
return ;
}
printf("%d%s", va_arg(ap, int), separator);
va_end(ap);
} 
}
