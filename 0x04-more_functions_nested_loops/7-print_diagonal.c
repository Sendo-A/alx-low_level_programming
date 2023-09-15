#include "main.h"

/**
 * print_diagonal - print a diagonal line on the terminal
 *
 * @n:is the number of times the \ character shoumd be printed
 */
void print_diagonal(int n)
{
	int ln, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			for (sp = 1; sp <= n; sp++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
