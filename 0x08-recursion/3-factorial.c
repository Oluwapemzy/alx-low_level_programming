#include "main.h"
/**
 *factorial- finds factorial of a given argument
 *@n: number to find factorial
 *Return: type integer
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial (n - 1));
}
