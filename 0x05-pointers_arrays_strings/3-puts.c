#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(i++);
		_putchar(*str++);
	}
		_putchar('\n');
}
