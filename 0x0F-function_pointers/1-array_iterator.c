#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - iterates through an array an perform an action
 *@array:array to iterate
 *@size:size of the array
 *@action:pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
