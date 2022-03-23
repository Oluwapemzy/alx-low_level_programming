#include "main.h"
/**
 *reverse_array- reverse an array
 *@a: the array
 *@n: length of array
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i, len;
for (i = 0; i < n; i++)
{
len = a[i];
a[i] = a[n - 1];
a[n - 1] = len;
n--;
}
}
