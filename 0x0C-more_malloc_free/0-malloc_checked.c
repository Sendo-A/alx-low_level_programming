#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: int
 *
 * Return: pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == 0)
		exit(98);

	return (c);
}
