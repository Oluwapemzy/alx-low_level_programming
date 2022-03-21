#include "main.h"
#include <string.h>
/**
 *puts2- puts 2
 *@str: type char
 *Return: void
 */
void puts2(char *str)
{
int coun;
int i;
coun = strlen(str);
for (i = 0; i < coun; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
