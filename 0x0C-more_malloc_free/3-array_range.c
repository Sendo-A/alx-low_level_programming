#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: array int
 */
int *array_range(int min, int max)
{
	int len, k;
	int *p;

	if (min > max)
		return (0);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (0);
	for (k = 0; k < len; k++)
		p[k] = min++;
	return (p);
}
