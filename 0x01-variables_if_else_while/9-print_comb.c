# include <stdio.h>
/**
 * main - Entry point
 *
 * function that  prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int k = 48;

	while (k <= 57)
	{
		putchar(k);
		if (k < 57)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
