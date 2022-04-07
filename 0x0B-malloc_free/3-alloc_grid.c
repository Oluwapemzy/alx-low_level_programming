#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid-create a two dimensional array
 * @width: width of matrix no of cols
 * @height: height of mat no of rows
 * Return: pointer to matrixcreated
 */
int **alloc_grid(int width, int height)
{
int **ar;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
ar = (int **)malloc(sizeof(int *) * height);
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ar[i] = (int *) malloc(sizeof(int) * width);
if (ar[i] == NULL)
{
free(ar);
for (j = 0; j <= i; j++)
{
free((ar[j]));
return (NULL);
}
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}
