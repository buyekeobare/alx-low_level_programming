#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, k, a, b, length;

	if (s1 == NULL)
		s1 = '';

	if (s2 == NULL)
		s2 = '';

		a = 0;

	while (s1[a] != '\0')
		a++;

		b = 0;

	while (s2[b] != '\0')
		b++;

	length = a + b

	conct = malloc((sizeof(char) * length) + 1);

	if (conct == NULL)
		return (NULL);

	j = 0;
	while (j < a)
	{
		conct[j] = s1[j];
		j++;
	}
	k = 0;
	while (j <= length)
	{
		conct[k] = s2[k];
		j++, k++;
	}
	return (conct);
}

