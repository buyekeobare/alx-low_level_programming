#include "main.h"
/**
 * _strpbrk - searches a string for 
 * any of a set of bytes
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int t;

		while (*s)
		{
			for (t = 0; accept[t]; t++)
			{
			if (*s == accept[t])
			return (s);
			}
		s++;
		}

	return ('\0');
}
