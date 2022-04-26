#include "lists.h"
/**
 *add_nodeint - add node to the beginning of list
 *@head: start of list
 *@n: value to add
 *Return: type listint_t address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
