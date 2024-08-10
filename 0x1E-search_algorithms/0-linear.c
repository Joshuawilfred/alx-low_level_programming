#include "search_algos.h"

/**
 * linear_search - Implements the linear search algorithm
 * @array: The input array
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
