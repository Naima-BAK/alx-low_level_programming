#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer of pointer of list.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next_node, *ptr;

if (head == NULL || *head == NULL)
{
return (NULL);
}

if ((*head)->next == NULL)
{
return (*head);
}

ptr = NULL;

while (*head != NULL)
{
next_node = (*head)->next;
(*head)->next = ptr;
ptr = *head;
*head = next_node;
}

*head = ptr;

return (*head);
}

