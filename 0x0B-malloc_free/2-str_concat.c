#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat- concats two strings together using malloc
 *@s1: first string
 *@s2: second string
 *Return: pointer to string of concstenation
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
int i = 0, j = 0, len1 = 0, len2 = 0;
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
s3 = malloc(sizeof(char) * (len1 + len2 + 1));
if (s3 == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
while (i < len1)
{
s3[i] = s1[i];
i++;
}
}
if (s2 != NULL)
{
while (i < (len1 + len2))
{
s3[i] = s2[j];
i++;
j++;
}
}
return (s3);
}
