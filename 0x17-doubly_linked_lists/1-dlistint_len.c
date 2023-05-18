#include "lists.h"
/**
 * size_t dlistint_len - returns the number of elements in a linked list
 * @h: list var
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	for (; h; nodes++)
		h = h->next;
	return (nodes);
}
