#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main-check code
 * @argc:number of arguments
 * @argv: array of arguments
 *Return:always zero
 */
int main(int argc, char *argv[])
{
int sum, i, j, k;
sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
puts("Error");
return (1);
}
}
}
for (k = 1; k < argc; k++)
{
if (atoi(argv[k]) >= 0)
{
sum += atoi(argv[k]);
}
}
printf("%d\n", sum);
return (0);
}
