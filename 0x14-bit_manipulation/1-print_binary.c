include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: unsigned long int to be printed in binary form
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int uli;
	int i, j = 0;

	for (i = 63; i >= 0; i--)
	{
		uli = n >> i;

		if ((uli & 1) == 1)
		{
			_putchar('1');
			j++;
		}
		else if (j != 0)
			_putchar('0');
	}
	if (j == 0)
		_putchar('0');
}
