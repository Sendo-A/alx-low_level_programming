#include "main.h"
/**
 * times_table - prints the 9 times tables starting from 0
 */
void times_table(void)
{
	int f, h, t;

	for (f = 0; f <= 9; f++)
	{
		_putchar(48);
		for (h = 1; f <= 9; f++)
		{
			_putchar(',');
			_putchar(',');

			t = f * h;
			if (t <= 9)
				_putchar(' ');
			else
				_putchar((t / 10) + 48);
			_putchar((t % 10) + 48);
		}
		_putchar('\n');
	}
}
