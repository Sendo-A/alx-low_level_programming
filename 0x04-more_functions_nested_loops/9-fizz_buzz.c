#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * for multiples of 3 print Fizz and for multiple of 5 print Buzz
 * both print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 1)
			printf("%d", n);
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			print(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			print(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
