#include "main.h"
#include <ctype.h>
/**
 *string_toupper-set all letters to uppercase
 *@str: parameter
 *Return-type char
 */
char *string_toupper(char *str)
{
int i;
i = 0;
while (str[i])
{
str[i] = toupper(str[i]);
i++;
}
return (str);
}
