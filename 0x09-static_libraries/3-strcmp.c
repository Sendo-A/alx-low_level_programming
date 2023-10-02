#include "main.h"
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 1 if its True otherwise 0
 */

int _strcmp(char *s1, char *s2)
{
	int is = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			is = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (is);
}
