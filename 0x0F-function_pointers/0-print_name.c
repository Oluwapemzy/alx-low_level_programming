#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - prints a name based on function passed
 *@name:name to print
 *@f:pointer to function that prints
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
