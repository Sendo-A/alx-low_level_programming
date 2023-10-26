#include "main.h"

/**
 * print_binary - prints a number as binary str
 * @n: the number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, d = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			d++;
		}
		else if (d)
			_putchar('0');
	}
	if (!d)
		_putchar('0');
}
