#include "main.h"
/**
 * main  - Entry point
 *
 * program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long int i, j, k, jj, jjj, kk, kkk;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	jj = j / 1000000000;
	jjj = j % 1000000000;
	kk = k / 1000000000;
	kkk = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", kk + (kkk / 1000000000));
		printf("%lu", kkk % 1000000000);
		kk = kk + jj;
		jj = kk - jj;
		kkk = kkk + jjj;
		jjj = kkk - jjj;
	}

	printf("\n");

	return (0);
}
