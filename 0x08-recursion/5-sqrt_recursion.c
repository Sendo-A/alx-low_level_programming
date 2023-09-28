#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: int
 * @nb: sqrt root
 *
 * Return: natural sqrt root for a number
 */
int square(int n, int nb);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds square root
 * @nb: sqrt root
 * @n: int
 * Return: int
 */


int square(int n, int nb)
{
	if (nb * nb == n)
		return (nb);
	else if (nb * nb < n)
		return (square(n, nb + 1));
	else
		return (-1);
}
