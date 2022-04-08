#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - len of 1st str, len of 2nd str, i
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int len1, len2, i, j;
len1 = len2 = i = j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n < len2)
{
s3 = malloc(sizeof(char) * (len1 + n + 1));
}
else
{
s3 = malloc(sizeof(char) * (len2 + len1 + 1));
}
if (s3 == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
s3[i] = s1[i];
}
while (n < len2 && i < (len1 + n))
{
s3[i++] = s2[j++];
}
while (n >= len2 && i < (len1 + len2))
{
s3[i++] = s2[j++];
}
s3[i] = '\0';
return (s3);
}
