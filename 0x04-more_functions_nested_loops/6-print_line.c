#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _character should be printed
 */

void print_line(int n)
{
	int lnt;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnt = 1; lnt <= n; lnt++)
			_putchar('_');
		_putchar('\n');
	}
}
