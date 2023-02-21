#include "main.h"
/**
 * print_alphabet - this function will print a to z then newline
 * _putchar - is a function I created to display output from for loop
 * Returns 0 'since its void'
 */

void print_alphabet(void)
{
	int herufi;
	for (herufi = 'a'; herufi <= 'z'; herufi++)
	{
		_putchar (herufi);
	}
	_putchar ('\n');
}
			
