#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer.
 * Return:  The address of the node where the loop starts || NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *tmp, *ptr;

tmp = ptr = head;

while (tmp && ptr && ptr->next)
{
tmp = tmp->next;
ptr = ptr->next->next;

if (tmp == ptr)
{
tmp = head;
break;
}
}

if (!tmp || !ptr || !ptr->next)
{
return (NULL);
}

while (tmp != ptr)
{
tmp = tmp->next;
ptr = ptr->next;
}

return (ptr);
}
