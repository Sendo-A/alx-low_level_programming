# include <stdio.h>
/**
 * main - Entry point
 *
 * function that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int k = 48;

	while (k <= 102)
	{
		putchar(k);
		if (k == 57)
		{
			k += 38;
			k++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
