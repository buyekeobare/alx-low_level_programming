#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: list of arguments to be printed
 * Description: if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *arg = "";

	va_list anything;

	va_start(anything, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", arg, va_arg(anything, int));
					break;
				case 'i':
					printf("%s%d", arg, va_arg(anything, int));
					break;
				case 'f':
					printf("%s%f", arg, va_arg(anything, double));
					break;
				case 's':
					str = va_arg(anything, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", arg, str);
					break;
				default:
					i++;
					continue;
			}
			arg = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(anything);
}

