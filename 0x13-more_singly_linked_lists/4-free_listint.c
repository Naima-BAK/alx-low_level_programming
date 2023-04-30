#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list.
 *
 * @head: A pointer to the first node.
 */

void free_listint(listint_t *head)
{
listint_t *ptr;

while (head != NULL)
{

ptr = head->next;

free(head);

head = ptr;

}
}
