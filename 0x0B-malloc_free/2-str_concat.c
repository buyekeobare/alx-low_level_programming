#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: concatenate of s1 and s2, or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

		i = a = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[a] != '\0')
		a++;

	dest = malloc(sizeof(char) * (i + a + 1));

	if (dest == NULL)
		return (NULL);

	i = a = 0;

	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		dest[i] = s2[a];
		i++, a++;
	}
	dest[i] = '\0';

	return (dest);
}

