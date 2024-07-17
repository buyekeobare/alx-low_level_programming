#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: size of the  array
 * @value: value to search for
 * Return: first index of value in the array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	for (i = prev = 0; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = prev;
		prev += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);

	prev = prev < size - 1 ? prev : size - 1;
	for (; i < prev && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
