#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first one, followed by a new line
 * @str: input
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *n = str;
	int o;

	while (*n != '\0')
	{
		n++;
		length++;
	}
	i = length - 1;
	for (o = 0 ; o <= i ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

