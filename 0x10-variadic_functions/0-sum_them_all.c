#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: Number of paramters passed to the function.
 * @...: Variable number of paramters to calculate the sum of
 * Return: If n == 0 - 0
 * Otherwise - result of the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list allnumbers;
	unsigned int i, result = 0;

	va_start(allnumbers, n);

	for (i = 0; i < n; i++)
		result = result + va_arg(allnumbers, int);

	va_end(allnumbers);

	return (result);
}

