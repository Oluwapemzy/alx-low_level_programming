#include <stdio.h>
#include "main.h"
/**
 *print_array-print array elements
 *@a: array a
 *@n : length of array passed
 *Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0;i < n;i++)
{
if (i == (n-1))
{
printf("%d", a[n - 1]);
break;
}
printf("%d, ", a[i]);
}
printf("\n");
}
