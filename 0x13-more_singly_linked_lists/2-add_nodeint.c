#include "lists.h"

/**
 * add_nodeint - add a new node at beginning of a list.
 * @head: head of a list_t list.
 * @n: value to insert into element.
 * Return: the number of nodes.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newElement;

/* creation of a new element*/
newElement = malloc(sizeof(listint_t));

/* check if the list is empty */
if (newElement == NULL)
{
return (NULL);
}
/* insert data of a new element : */

newElement->n = n;

/*store the new element in the head*/
newElement->next = *head;

/* keep the head of the list*/
*head = newElement;

return (newElement);
}
