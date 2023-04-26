#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a node at the beginning of list.
 * @head: points to the beginning of a listint_t list
 * @n: passed parameter
 *
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
