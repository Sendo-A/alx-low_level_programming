#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: the number of arguments
 * @argv: array of pointers to argument
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *k;

	while (--argc)
	{
		for (k = argv[argc]; *k; k++)
			if (*k < '0' || *k > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
