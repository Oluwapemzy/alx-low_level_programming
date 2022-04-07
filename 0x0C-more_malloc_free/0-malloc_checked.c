#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked- malloc check
 *@b: param
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
  /**
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98**/
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
