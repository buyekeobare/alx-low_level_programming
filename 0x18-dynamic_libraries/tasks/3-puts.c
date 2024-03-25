#include "main.h"

/**
  * _puts - rints a string, followed by a new line, to stdout
  * @str: the string to print
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
