#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * function that prints the last digit of a number
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;

	if (k > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, k);
	else if (k == 0)
		printf("last digit of %d is %d and is 0\n", n, k);
	else if (k < 6 && k != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, k);
	return (0);
}
