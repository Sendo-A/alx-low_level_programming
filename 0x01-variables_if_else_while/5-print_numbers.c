#include <stdio.h>
/**
 * main - Entry point
 *
 * function that prints single digit numbers of base 10 ,0
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
	int k = 0;

	while (k <= 9)
	{
		printf("%d", k);
		k++;
	}
	putchar('\n');
	return (0);
}
