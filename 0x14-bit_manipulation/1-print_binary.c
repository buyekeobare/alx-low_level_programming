include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: unsigned long int to be printed in binary form
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if ((current & 1) == 1)
		{
			_putchar('1');
			c++;
		}
		else if (c != 0)
			_putchar('0');
	}
	if (c == 0)
		_putchar('0');
}
