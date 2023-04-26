#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function to convert num to unsigned int
 *@j: pointer to string containing the binary number
 *
 * Return: 0
 */
unsigned int binary_to_uint (const char *j)
{
	int w;
	unsigned int num = 0;

	if (!j)
		return (0);
	for (w = 0; j[w] != '\0'; w++)
	{
		if (j[w] != '0' && j[w] != '1')
		return (0);
	}
	for (w = 0; j[w] != '\0'; w++)
	{
		num << = 1;
		if (j[w] == '1')
			num += 1;
	}
	return (num);
}
