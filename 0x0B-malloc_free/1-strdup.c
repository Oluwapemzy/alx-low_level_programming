#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup- duplicates a string and return the duplica
 *te as a pointer to the string
 *@str: string to duplicate
 *Return: type char, the duplicate
 */
char *_strdup(char *str)
{
char *strDup;
int i, j;
if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}
i++;
strDup = malloc(sizeof(char) * i);
if (strDup == NULL)
{
return (NULL);
}
j = 0;
while (j < i)
{
strDup[j] = str[j];
j++;
}
return (strDup);
}
