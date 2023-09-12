#include "main.h"

/**
 * main - Entry point
 *
 * program that prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cnt;
	unsigned long fb1 = 0, fb2 = 1, sum;

	for (cnt = 0; cnt < 50; cnt++)
	{
		sum = fb1 + fb2;
		printf("%lu", sum);

		fb1 = fb2;
		fb2 = sum;

		if (cnt == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
