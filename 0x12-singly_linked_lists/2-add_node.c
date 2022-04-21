#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: head of list
 *@str: node to add
 *Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int strlen = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
while (str[strlen])
{
strlen++;
}
new->len = strlen++;
new->next = *head;
*head = new;
return (*head);
}
