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
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (uli = n, i = 0; (uli >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
