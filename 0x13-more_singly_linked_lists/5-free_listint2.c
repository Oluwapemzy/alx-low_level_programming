#include "lists.h"
/**
 *free_listint2- frees list and set head to NULL
 *@head: start of list
 *Return: void type
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (!head)
{
return;
}
while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}
