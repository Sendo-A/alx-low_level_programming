# include "main.h"

/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: pointer
 * @c: constant
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int lp;

	for (lp = 0; s[lp] >= '\0' ; lp++)
	{
		if (s[lp] == c)
		{
			return (s + lp);
		}
	}

	return ('\0');
}
