#include "main.h"
/**
 *_strlen_recursion-counts number of charactwrd in a string
 *@s: given string
 *Return: integer returned
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
