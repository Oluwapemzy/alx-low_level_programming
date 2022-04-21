#include "lists.h"
/**
 *add_node_end - add node to the end of list
 *@head: head of node
 *@str : string to duplicate
 *Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int length = 0;
while (str[length])
{
length++;
}
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->len = length;
new->next = NULL;
if (temp == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (*head);
}
