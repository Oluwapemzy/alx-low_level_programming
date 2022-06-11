#include "lists.h"
/**
 * add_nodeint_end- add node at end of list
 * @head: address of head  of list
 * @n: value to add
 * Return: the new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *start;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    if (*head == NULL)
    {
        new->next = NULL;
        new->n = n;
        new->prev = NULL;
        *head = new;
        return (new);
    }
    while (start->next)
    {
        start = start->next;
    }
    start->next = new;
    new->prev = start;
    new->next = NULL;
    new->n = n;
    return (new);
}
