#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked- malloc check
 *@b: param
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
