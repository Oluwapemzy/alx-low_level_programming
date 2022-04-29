#include "main.h"
/**
 *set_bit- sets the value of a bit to 1 at a given index.
 *@n: the number
 *@index: where to change
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int x = 1;
if (sizeof(n) * 8 < index)
{
return (-1);
}
x <<= index;
*n |=x;
return (1);
}
