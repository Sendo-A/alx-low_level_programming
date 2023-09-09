#include <stdio.h>
/**
 * main - Entry point
 *
 * program that prints all possible different combinations of two digits.
 *
 * Return: always 0 (Success)
 */
int main(void)

{
	int k = 0, f;

	while (k <= 9)
	{
		f = 0;
		while (f <= 9)
		{
			if (k != f && k < f)
			{
				putchar(k + 48);
				putchar(f + 48);

				if (k + f != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			f++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
