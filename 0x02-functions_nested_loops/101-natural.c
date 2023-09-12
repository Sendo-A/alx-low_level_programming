# include "main.h"
/**
 * main - Entry point
 *
 * compute and print all number that are multiples of 3 and 5
 * below 1024(excluded)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
