#include "holberton.h"
#include <stdlib.h>
/**
 *create_array-creates array
 *@size: size of array to be created
 *@c: string to initialize array with
 *Return: type char
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
if (size == 0)
{
return (NULL);
}
ar = (char *) malloc(sizeof(char) * size);
if (ar == NULL)
{
return (0);
}
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
