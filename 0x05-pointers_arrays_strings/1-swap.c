#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 *
 * @m: input parameter 1
 * @n: input parameter 2
 *
 * Return: void
 */
void swap_int(int *m, int *n)
{
	int swp;

	swp = *m;
	*m = *n;
	*n = swp;
}
