#include "main.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 *
 * @x: int
 * @y: int
 *
 * Return: value of x power y
 */
int _pow_recursion(int x, int y);
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return  (x * _pow_recursion(x, y - 1));
}
