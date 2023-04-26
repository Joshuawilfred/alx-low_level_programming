#include "lists.h"

/**
 * sum_listint - Function to Calculate the sum of all data in a list.
 * @head: pointer to the head of the list.
 *
 * Return: sum of all data in the list
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
