#include "main.h"

#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: number of bytes
 * @c: char to assign
 * Return: pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == 0)

		return (NULL);

	for (i = 0; i < size; i++)

		array[i] = c;

	return (array);

}
