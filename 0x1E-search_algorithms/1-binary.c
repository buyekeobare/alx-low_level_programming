#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search in
 * Return: index of value ||-1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, right, left;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right =mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
