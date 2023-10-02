#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int k = 0;

	while (argc--)
	{
		printf("%s\n", argv[k]);
		k++;
	}

	return (0);
}
