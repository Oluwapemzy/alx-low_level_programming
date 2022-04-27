#include "lists.h"
/**
 *sum_listint- sums the data in a list
 *@head: start of list
 *Return: returns the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
