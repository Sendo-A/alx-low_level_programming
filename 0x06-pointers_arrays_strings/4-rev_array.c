#include "main.h"
/**
 * reverse_array - function that reverses
 * the content of an array of integers.
 *
 * @a: an array of int
 * @n: the number of elements to swap
 *
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int k, l, m;

	for (k = 0, l = (n - 1); k < l; k++, l--)
	{
		m = a[k];
		a[k] = a[l];
		a[l] = m;
	}
}
