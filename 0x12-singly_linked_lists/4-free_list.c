#include "lists.h"
/**
 *free_list - function that frees a list_t list
 *@head:start of list
 *Return: void
 */
void free_list(list_t *head)
{
list_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp->str);
free(temp);
}
}
