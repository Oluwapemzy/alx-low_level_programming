#include "main.h"
#include <string.h>
/**
 *rev_string - reverse string
 *@s: type char
 *Return: void
 */
void rev_string(char *s)
{
int i, length, temp;
length = strlen(s);
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
/*_putchar('\n');*/
}
