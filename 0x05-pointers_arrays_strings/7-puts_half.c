#include "main.h"
#include <string.h>
/**
 *puts_half- print from half
 *@str: type char
 *Return: void
 */
void puts_half(char *str)
{
int i, n, length;
length = strlen(str);
 if (length % 2 == 0)
{
n = (length - 1) / 2;
}
else
{
n = length / 2;
}
for(i = n + 1; i <= length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
