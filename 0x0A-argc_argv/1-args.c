#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc:number of command line 
 * @argv: pointer to an array
 * Return: 0
 */

int main(int arc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
