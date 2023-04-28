#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the new element of the list.
 * Return: &address of the new element || null.
 */

list_t *add_node_end(list_t **head, const char *str)
{
/*create the new element*/
list_t *newElement_end;
list_t *ptr;

if (str == NULL)
return (NULL);

newElement_end = malloc(sizeof(list_t));

if (newElement_end == NULL)
return (NULL);

/*str needs to be duplicated*/
newElement_end->str = strdup(str);

if (newElement_end->str == NULL)
{
free(newElement_end);
return (NULL);
}

newElement_end->len = strlen(newElement_end->str);
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
