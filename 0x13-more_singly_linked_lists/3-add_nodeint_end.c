#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the head of the list
 * @n: integer to be added to the new element of the list.
 * Return: &address of the new element || null.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
/*create the new element*/
listint_t *newElement_end;
listint_t *ptr;

if (head == NULL)
return (NULL);

newElement_end = malloc(sizeof(listint_t));

if (newElement_end == NULL)
return (NULL);

newElement_end->n = n;

if (!newElement_end->n)
{
free(newElement_end);
return (NULL);
}

/*its next points to null*/
newElement_end->next = NULL;

if (*head == NULL)
{
*head = newElement_end;
return (newElement_end);
}

ptr = *head;
while (ptr->next)
ptr = ptr->next;
/*store the item in the last cell*/
ptr->next = newElement_end;
return (newElement_end);
}
