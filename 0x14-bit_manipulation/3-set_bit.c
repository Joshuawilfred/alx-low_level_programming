#include "main.h"

/**
 * set_bit -Function thatsets the value of a bit to 1.
 * @n: A pointer to the bit.
 * @index: The index starting at 0.
 *
 * Return: If an error occurs -1, else return 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
