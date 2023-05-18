#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @j: list of
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	for (; h; nodes++, h = h->next)
		printf("%d\n", h->n);
	return (nodes);
}
