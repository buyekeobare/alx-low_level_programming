#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: string to concatenate
* @s2: string to concatenate
* Return: concatenate of s1 and s2, NULL
*/
char *str_concat(char *s1, char *s2)
{
char *s3;
int j, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
j = k = 0;
while (s1[j] != '\0')
j++;
while (s2[k] != '\0')
k++;
s3 = malloc(sizeof(char) * (j + k + 1));
if (s3 == NULL)
return (NULL);
j = k = 0;
while (s1[j] != '\0')
{
s3[j] = s1[j];
j++;
}
while (s2[k] != '\0')
{
s3[j] = s2[k];
j++, k++;
}
s3[j] = '\0';
return (s3);
}
