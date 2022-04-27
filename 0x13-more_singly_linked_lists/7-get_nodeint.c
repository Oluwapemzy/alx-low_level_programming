#include "lists.h"
/**
 *get_nodeint_at_index- gets node at particular point
 * n
 *@head: start of linked list
 *@index: node index to return
 *Return: returns the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *new = head;
unsigned int i;
for (i = 0; new; i++)
{
if (i == index)
{
return (new);
}
new = new->next;
}
return (NULL);
}
