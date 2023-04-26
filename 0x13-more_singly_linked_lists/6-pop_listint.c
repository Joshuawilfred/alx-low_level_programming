#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int ret;

if (*head == NULL)
return (0);

tmp = *head;
ret = (*head)->n;
*head = (*head)->next;

free(tmp);

return (ret);
}
