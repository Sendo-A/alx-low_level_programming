#include "variadic_function.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: number of arguments
 * @...: int sum
 * Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, 
	unsigned int i;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
