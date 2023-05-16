#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width:  width of input value
 * @height: height of input value
 * Return: width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a, b, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (!array)

		free(p);
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = (int *) malloc(sizeof(int) * width);

		if (!array[a])
		{
			for (b = 0; b <= a; b++)
				free(array[b]);

			free(array);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	}
	return (array);
}

