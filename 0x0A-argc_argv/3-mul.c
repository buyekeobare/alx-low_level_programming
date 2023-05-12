#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, j, k, length, m, num;

	i = 0;
	j = 0;
	k = 0;
	length = 0;
	m = 0;
	num = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= 48 && s[i] <= 57)
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			k = k * 10 + num;
			m = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (k);
}

/**
 * main - Write a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int multiplication, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	multiplication = num1 * num2;

	printf("%d\n", multiplication);

	return (0);
}

