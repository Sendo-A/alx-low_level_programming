#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numberd
 * @argc: nuùber of commandline
 * @argv: pointer to an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
