#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of list.
 * Return: return the number of nodes.
 */
size_t print_list(const list_t *h)
{
int i = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
/*printf("[%d] %s\n", h->len, h->str);*/
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
i++;
h = h->next;
}
return (i);
}
