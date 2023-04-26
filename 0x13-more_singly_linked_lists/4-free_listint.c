#include "lists.h"

/**
 * free_listint - Function to free a listint_t list.
 * @head: A pointer pointing to the head of the list to be freed.
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
