#include "main.h"

/**
 *print_binary - FUnction to Print the binary representation of a number.
 * @j: The number to be printed in binary.
 */
void print_binary(unsigned long int j)
{
	if (j > 1)
		print_binary(j >> 1);

	_putchar((j & 1) + '0');
}
