#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: 0
 */
unsigned int binary _to_unit(const char *j)
{
	int w;
	unsigned int num;

	num = 0;
	if(!j)
		return (0);
	for (w = 0; j[w] != '\0'; w++)
	{
		if (j[w] != '0' && j[w] != '1')
			return (0);
	}
	for (w = 0; j[w] != '\0'; w++)
	{
		num <<= 1;
		if (j[w] == '1')
			num += 1;
	}
	return(num);
}
