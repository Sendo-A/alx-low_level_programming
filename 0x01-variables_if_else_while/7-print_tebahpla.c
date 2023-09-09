# include <stdio.h>
/**
 * main - Entry point
 *
 * function that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Sucess)
 */
int main(void)

{
	char k;

	for (k = 'z'; k >= 'a'; k--)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
