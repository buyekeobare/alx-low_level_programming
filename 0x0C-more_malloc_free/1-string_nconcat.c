#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * returned pointer should point to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string, NULL (error)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k])
		k++;
	while (s2[l])
		l++;

	if (n >= l)
		i = k + l;
	else
		i + k + n;

	s3 = malloc(sizeof(char) * i + 1);

	if (s3 == NULL)
		return (NULL);

	l = 0;
	while (j < i)
	if (j <= i)
		s3[j] = s1[j];
	if (j <= i)
		s3[j] = s2[l];
		l++;
		j++;

	s3[i] = '\0';

	return (s3);
}

