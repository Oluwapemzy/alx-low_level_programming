/*#include <stdio.h>*/
#include "main.h"
/**
 *swap_int- swaps two integers
 *@a: first number
 *@b: second numner
 *Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
