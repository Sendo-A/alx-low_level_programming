#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a: 2d array of int
 * @size: size of array (squat)
 */
void print_diagsums(int *a, int size)
{
	int lp, s1 = 0, s2 = 0;

	for (lp = 0; lp < size; lp++)
	{
		s1 += a[(size + 1) * lp];
		s2 += a[(size - 1) * (lp + 1)];
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
