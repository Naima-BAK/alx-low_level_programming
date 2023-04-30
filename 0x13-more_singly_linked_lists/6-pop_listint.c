#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a pointer
 *
 *Return: n or 0
 */
int pop_listint(listint_t **head)
{
listint_t *pop;
int n;

if (head == NULL || *head == NULL)
{
return (0);
}
pop = *head;
*head = pop->next;

n = pop->n;

free(pop);

return (n);
}
