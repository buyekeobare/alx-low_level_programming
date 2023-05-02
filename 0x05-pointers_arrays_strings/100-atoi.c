#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: 0 or n
 */
int _atoi(char *s)
{
	int c, d, n, length, g, digit;

	c = 0;
	d = 0;
	n = 0;
	length = 0;
	g = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (c < length && g == 0)
	{
		if (s[c] == '-')
			++d;

		if (s[c] >= '0' && s[c] <= '9')
		{
			digit = s[c] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			g = 1;
			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;
			g = 0;
		}
		c++;
	}

	if (g == 0)
		return (0);

	return (n);
}
