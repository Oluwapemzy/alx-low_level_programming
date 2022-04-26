#include "lists.h"
/**
 *print_listint - funtion that prints all elements of list
 *@h: the singly list
 *Return: type size_t, number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
