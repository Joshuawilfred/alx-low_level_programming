#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint prints all the elements iof a listint_t
 *
 * return number of noes in list
 * */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return(count);
}
