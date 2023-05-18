#include <stdlib.h>
#include "main.h"
/**
* *_memset - fills memory with a constant byte
* @str: memory area to be filled
* @a: char to copy
* @n: number of times to copy a
*
* Return: pointer to the memory area s
*/
char *_memset(char *str, char a, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(str + i) = a;
}
return (str);
}
/**
* *_calloc - allocates memory for an array, using malloc
* @nmemb: number of elements in the array
* @size: size of each element
* Return: NULL if nmemb or size is 0
* NULL if malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
_memset(p, 0, nmemb * size);
return (p);
}
