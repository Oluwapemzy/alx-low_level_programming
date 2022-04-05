#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main-main block
 *@argc: numner of arguments passed
 *@argv: array list of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int i;
int product = 1;
if (argc != 3)
{
printf("Error");
return (1);
}
for (i = 1; i < argc; i++)
{
product *= atoi(argv[i]);
}
printf("%d\n", product);
return (0);
}
