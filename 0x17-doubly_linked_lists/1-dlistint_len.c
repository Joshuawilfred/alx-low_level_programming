#include "lists.h"

/**
 * dlistint_len - Return number of elements in dll
 * @h: Pointer head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
