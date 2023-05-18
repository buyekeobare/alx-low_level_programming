#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored
* Return: NULL if min > max
* NULL is malloc fails
*/
int *array_range(int min, int max)
{
int *p;
int i, array;
if (min > max)
return (NULL);
array = max - min + 1;
p = malloc(sizeof(int) * array);
if (p == NULL)
return (NULL);
for (i = 0; min <= max; i++)
*(p + i) = min++;
return (p);
}
