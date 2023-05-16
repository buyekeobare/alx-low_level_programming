#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: a pointer to the duplicated string, or NUll
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')

		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)

		duplicate[j] = str[j];

	duplicate[i] = '\0';
	return (duplicate);
}

