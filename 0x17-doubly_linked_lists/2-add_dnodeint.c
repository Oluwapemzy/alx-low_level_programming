#include "lists.h"
/**
 * add_dnodeint- add new node at begimming
 * @head: head of node
 * @n: value to add
 * Return: thr address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->prev = NULL;
new->next = *head;
new->n = n;
if (*head != NULL)
{
(*head)->prev = new;
}
*head = new;
return (new);
}
