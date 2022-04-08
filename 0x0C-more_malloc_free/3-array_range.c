#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range- create array from min to max
 *@min:minimum value to start from
 *@max: max value to stop
 *Return: returns pointer of an array
 */
int *array_range(int min, int max)
{
int *arr;
int i, nums;
if (min > max)
{
return (NULL);
}
nums = (max - min) + 1;
arr = malloc(sizeof(int) * nums);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < nums; i++)
{
arr[i] = min;
min++;
}
return (arr);
}
