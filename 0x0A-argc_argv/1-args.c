#include <stdio.h>
#include "main.h"
/**
 *main- entet code
 *@argc: number of arguments in main program
 *@argv: array of arguments
 *Return: always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
