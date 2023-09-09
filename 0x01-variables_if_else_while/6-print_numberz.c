# include <stdio.h>
/**
 * main - Entry point
 *
 * function that prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int k = 0;

	while (k <= 9)
	{
		putchar('0' + k);
		k++;
	}
	putchar('\n');
	return (0);
}
