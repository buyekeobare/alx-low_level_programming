#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip
 * to get from one number to another
 * @n: first value
 * @m: second value
 * Return: returns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int uli;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		uli = xor >> i;
		if (uli & 1)
			j++;
	}

	return (j);
}
