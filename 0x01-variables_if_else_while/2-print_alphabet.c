#include <stdio.h>
/**
 * main -Entry point
 *
 * function that prints the alphabet in lowercase
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char alph = 'A';
	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
