#include "main.h"

/**
 * print_triangle - function that prints triangle
 *
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, k;

	for (i = 0; i < size; i++)
	{
		for (k = 1; k < (size - i); k++)
			_putchar(' ');
		for (k--; k < size; k++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	putchar('\n');
}
