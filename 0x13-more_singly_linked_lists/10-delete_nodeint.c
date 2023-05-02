#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer of a pointer.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *ptr, *delete_node;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
delete_node = (*head)->next;
free(*head);
*head = delete_node;

return (1);
}

ptr = *head;

for (i = 0; i < index - 1; i++)
{
if (ptr->next == NULL)
return (-1);

ptr = ptr->next;
}

delete_node = ptr->next;
ptr->next = delete_node->next;
free(delete_node);

return (1);
}
