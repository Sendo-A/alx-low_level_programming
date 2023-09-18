#include "main.h"
/**
 * print_rev - unction that prints a string, in reverse
 *
 * @r: pointer string to print
 *
 * Return: None
 */
void print_rev(char *r)
{
	int k = 0;

	while (r[k])
		k++;

	while (k--)
	{
		_putchar(r[k]);
	}
	_putchar('\n');
}
