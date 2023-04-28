#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newElement;

/* creation of a new element*/
newElement = malloc(sizeof(list_t));

/* check if the list is empty */
if (newElement == NULL)
{
return (NULL);
}
/* insert data of a new element */

/* strdup return the copy of str */
newElement->str = strdup(str);
/* function strlen : get the lenght of a string*/
newElement->len = strlen(str);
/*store the new element in the head*/
newElement->next = *head;

/* keep the head of the list*/
*head = newElement;

return (newElement);
}
