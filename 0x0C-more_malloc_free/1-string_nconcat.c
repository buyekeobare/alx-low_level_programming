#include <stdlib.h>
#include "main.h"
/**
**string_nconcat - concatenates two strings
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
while (s1 && s1[k])
k++;
while (s2 && s2[l])
l++;
if (n < l)
s3 = malloc(sizeof(char) * (k + n + 1));
else
s3 = malloc(sizeof(char) * (k + l + 1));
if (!s3)
return (NULL);
while (i < k)
{
s3[i] = s1[i];
i++;
}
while (n < l && i < (k + n))
s3[i++] = s2[j++];
while (n >= l && i < (k + l))
s3[i++] = s2[j++];
s3[i] = '\0';
return (s3);
}
