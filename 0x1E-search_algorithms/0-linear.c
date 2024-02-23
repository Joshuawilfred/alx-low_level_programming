#include "search_algos.h"

/**
 * linear_search - Is an algorithm
 * @array: Is the input array
 * @size: Is the sizeof thearray
 * @value: Is the value of the array
 * Return: -1 if NUll or index otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int num;

	if (array)
	{
		for (num = 0; ind < size; num++)
		{
			printf("Value checked array[%d] = [%d]\n",num, array[num]);
			if (array[num] == value)
			{
				return (num);
			}
		}
	}
	return (-1);
}
