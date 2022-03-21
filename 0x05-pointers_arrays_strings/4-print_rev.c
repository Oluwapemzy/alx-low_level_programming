#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev-reverse a string
 *@s: type char
 *Return: void
 */
void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
