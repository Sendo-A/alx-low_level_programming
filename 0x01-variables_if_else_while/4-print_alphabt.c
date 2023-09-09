#include <stdio.h>
/**
 * main - Entry point
 *
 * function that prints alphabets in lower case
 *
 * Return: Always 0 (Succes)
 */
int main(void)

{
	int lt = 'a';

	while (lt <= 'z')
	{
		if (lt == 'e' || lt == 'q')
			lt++;
		putchar(lt);
		lt++;
	}
	putchar('\n');
	return (0);
}
