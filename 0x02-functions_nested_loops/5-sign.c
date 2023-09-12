#include "main.h"
/**
 * print_sign - prints +if j is greater than 0 -if j is negtive. 0 if its 0.
 *
 * @j: as an input for the function
 *
 * Return: either 1 for a + 0 for 0 -1 if negative
 */
int print_sign(int j)
{
	if (j > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (j == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
