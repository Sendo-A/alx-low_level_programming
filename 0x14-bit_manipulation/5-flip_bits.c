#include "main.h"

/**
 * flip_bits - return number of bits that would need to be flipped
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = n ^ m;
	unsigned int c = 0;

	while (t)
	{
		if (t & 1ul)
			c++;
		t = t >> 1;
	}
	return (c);
}
