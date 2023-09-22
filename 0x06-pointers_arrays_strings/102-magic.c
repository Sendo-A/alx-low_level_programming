#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int c[5];
	int *d;

	c[2] = 1024;
	d = &n;
	
	d[5] = 98;

	printf("c[2] = %d\n", c[2]);
	return (0);
}
