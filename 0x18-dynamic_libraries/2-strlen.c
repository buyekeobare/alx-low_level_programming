i#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
