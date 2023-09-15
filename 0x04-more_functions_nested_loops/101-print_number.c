#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer with putchar
 *
 * @i: input param
 *
 * Return: N
 */
void print_number(int i)
{
	unsigned int num = i;

	if (i < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
