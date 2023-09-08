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
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
