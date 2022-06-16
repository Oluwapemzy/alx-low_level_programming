#include "main.h"
#include <string.h>
/**
 *_strcmp-compares two strings
 *@s1: first parameter
 *@s2: second param
 *Return: type int if less or equal or greater
 */
int _strcmp(char *s1, char *s2)
{
int cmp;
cmp = strcmp(s1, s2);
return (cmp);
}
