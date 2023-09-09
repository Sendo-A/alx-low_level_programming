# include <stdio.h>
/**
 * main - Entry point
 *
 * program that prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int k = 0, c;

	while (k <= 99)
	{
		c = k;
		while (c <= 99)
		{
			if (c != k)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);

				if (k != 98 || c != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
