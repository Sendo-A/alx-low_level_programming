#include <main.h>
/**
 * print_times_table - function that prints the n times table,from 0. t
 * ill 15 no more no less than 0
 *
 * @i: as input number
 */
void print_times_table(int i)
{
	int f, j, k;

	if (i <= 15 && i >= 0)
	{
		for (k = 0; k <= i; ++k)
		{
			_putchar(48);
			for (j = 1; j <= i; ++j)
			{
				_putchar(' ');
				_putchar(' ');

				f = k * j;

				if (f <= 9)
					_putchar(' ');

				if (f <= 99)
					_putchar(' ');
				if (f >= 100)
				{

					_putchar((f / 100) + 48);
					_putchar((f / 10) % 10 + 48);
				} else if (f <= 99 && d >= 10)
					_putchar((f / 10) + 48);

				_putchar((f % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
