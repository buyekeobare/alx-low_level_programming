#include "main.h"

/**
* clear_bit - clears the value of a bit at a given index
* @n: the number to be evaluated
* @index: the index
* Return: returns 1 (Success), -1 (error)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	*n = (*n & ~m);

	return (1);
}
