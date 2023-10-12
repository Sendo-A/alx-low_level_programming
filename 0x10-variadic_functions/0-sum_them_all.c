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
	ins s = 0, i = n;
	va_list ap;

	if (n == NULL)
		return (0);
	
	va_start(ap, n);
	for 
		(i =0; i < n; i++)
			s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
