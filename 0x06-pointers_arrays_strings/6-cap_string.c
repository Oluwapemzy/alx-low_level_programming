#include "main.h"
#include <ctype.h>
/**
 *cap_string- capitalize first letter of words in a string
 *@str: type char
 *Return: type char
 */
char *cap_string(char *str)
{
int i, j;
char punctuation[] = {'\t', '\n', '.', ';', ',', '!', '?', '"', '(', ' ', ')', '{', '}'};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 13; j++)
{
if (str[i] == punctuation[j])
{
str[i+1] = toupper(str[i+1]);
}
}
}
return str;
}
