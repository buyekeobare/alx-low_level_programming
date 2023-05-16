#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)

{
	char *double;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while ((doule[i] = str[i] != '\0')
		i++;

	double = malloc(sizeof(char) * (j + 1));

	if (double == NULL)

		return (NULL);

	for (str[j])
		j++;

	return (double);
}

