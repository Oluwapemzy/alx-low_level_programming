#include "lists.h"
/**
 *listint_len - prints length of singly list
 *@h: singly list
 *Return: size_t type length of list
 */
size_t listint_len(const listint_t *h)
{
size_t len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
