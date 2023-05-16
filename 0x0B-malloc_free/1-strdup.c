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
	int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	double = malloc(sizeof(char) * (i + 1));

	if (double == NULL)

		return (NULL);

	for (j = 0; str[j]; j++)

		double[j] = str[j];

	return (double);
}

