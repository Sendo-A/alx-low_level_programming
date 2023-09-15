#include <stdio.h>

/**
 * main - function that prints large prime factor
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, k;

	n = 612852475143;

	for (k = 2; k <= i; k++)
	{
		if (i % k == 0)
		{
			i /= k;
			k--;
		}
	}
	printf("%ld\n", k);
	return (0);
}
