# include "main.h"

/**
 * print_alphabet_x10 - function that will print 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	int row, let;

	for (row = 0; row <= 9; row++)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
