#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: pointer to string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int ncr = 0;

	if (*s > '\0')
	{
		ncr += strlen_recursion(s + 1) + 1;
	}
	return (ncr);
}

