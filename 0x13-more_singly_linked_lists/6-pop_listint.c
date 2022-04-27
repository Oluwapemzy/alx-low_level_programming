#include "lists.h"
/**
 *pop_listint- remove head
 *@head: start of the linked list
 *Return: retutn data of popped node
 */
int pop_listint(listint_t **head)
{
listint_t *new = *head;
int num;
if (!*head)
{
return (0);
}
num = (*head)->n;
*head = new->next;
free(new);
return (num);
}
