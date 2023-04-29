#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked  list.
 * @h: pointer to the head of list.
 * Return: return the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
int i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}
