#include <stdio.h>
/**
 * main - Entry point
 *
 * Function that prints the size of types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("size of double: %zu byte(s)\n", sizeof(double));
	printf("size of long: %zu byte(s)\n", sizeof(long));
	printf("size of long long: %zu byte(s)\n", sizeof(long long));
	return (0);
}
