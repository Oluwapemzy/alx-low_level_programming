#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index-searches for an integer
 *@array: list of items to search integer
 *@size: number of elements in the array array
 *@cmp:pointer to the function to be used to compare values
 *Return:integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int resCmp, i, myReturn;
if (!array || !cmp)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
resCmp = cmp(array[i]);
if (resCmp != 0)
{
myReturn = i;
return (myReturn);
}
}
return (-1);
}
