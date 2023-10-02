# include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 *
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to see
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int lp;

	for (lp = 0; n > 0; lp ++, n--)
	{
		s[lp] = b;
	}

	return (s);
}
