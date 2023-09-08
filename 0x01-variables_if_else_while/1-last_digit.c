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
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n\n", n, k);
	else if (n == 0)
		printf("last digit of %d is %d 0 and is 0\n\n", n, k);
	else
		printf("last digit of %d is %d less than 6 and not 0\n\n", n, k);
	return (0);
}
