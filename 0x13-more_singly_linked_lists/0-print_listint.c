#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints elemets of listint_t.
 * @j: A pointer pointing to the head of the list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *j)
{
	size_t nodes = 0;

	while (j)
	{
		nodes++;
		printf("%d\n", j->n);
		j = j->next;
	}

	return (nodes);
}
