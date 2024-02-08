#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: a string of binary numbers
* Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int n = 0;

	if (!b)
		return (0);

	for (n = 0; b[n] != '\0'; n++)
	{
	if (b[n] != '0' && b[n] != '1')
	return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		ui <<= 1;
		if (b[n] == '1')
		ui = ui + 1;
	}
	return (ui);
}
