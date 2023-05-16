#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, k, m = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (k = 0; av[i][k]; k++)
	{
		str[m] = av[i][k];
		m++;
	}
	}
	if (str[m] == '\0')
	{
		str[m++] = '\n';
	}
	return (str);
}
