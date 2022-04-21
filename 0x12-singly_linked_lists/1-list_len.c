#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h: the linked list
 *Return: length of list
 */
size_t list_len(const list_t *h)
{
size_t list_length = 0;
while (h != NULL)
{
h = h->next;
list_length++;
}
return (list_length);
}
