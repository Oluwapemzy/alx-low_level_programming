#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_strings- function to print argument passed as strimgs
 *@separator: what to separate args with
 *@n: number of strings passed to the function
 *Return: type void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;
va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
