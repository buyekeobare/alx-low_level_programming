#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
int i = -1, j;
for (j = 0; dest[j] != '\0'; j++)
;

do {
	i++;
	dest[j] = src[i];
	j++;
} while (src[i] != '\0');

return (dest);
}
