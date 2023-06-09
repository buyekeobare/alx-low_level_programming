#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int to be printed in binary form
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int uli;

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
