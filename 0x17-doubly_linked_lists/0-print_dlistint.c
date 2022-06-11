#include "lists.h"
/**
*print_dlistint- print double linked list
*@h: the head
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int i;
size_t len = 0;
for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
len++;
}
return (len);
}
