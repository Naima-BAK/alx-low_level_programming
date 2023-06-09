#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to the head of list.
 * Return: return the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
int i = 0;

while (h)
{
if (!h->n)
{
printf("0\n");
}
else
{
printf("%d\n", h->n);
}
i++;
h = h->next;
}
return (i);
}
