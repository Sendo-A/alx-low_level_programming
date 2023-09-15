#include "main.h"

/**
 * print_diagonal - print a diagonal line on the terminal
 *
 * @n:is the number of times the \ character shoumd be printed
 */
void print_diagonal(int n)
{

	int j = 0, jj;

	while (j < n && n > 0)
	{
		jj = 0;
		while (jj < j)
		{
			_putchar(' ');
			jj++;
		}

		_putchar(92);
		_putchar('\n');
		j++;

	}
	if (j <= 0)
		_putchar('\n');
}
