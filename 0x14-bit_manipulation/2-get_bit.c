#include "main.h"

/**
 * get_bit - gets the bit at the index
 * @n: the number index
 * @index: the bit 
 * Return: the bit otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= sizeof(n) * 8)
		return (-1);

	return (n << index & 1);
}
