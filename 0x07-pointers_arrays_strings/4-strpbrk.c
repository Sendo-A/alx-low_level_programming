# include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: string to match
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int lp, lps;
	char *p;

	lp = 0;
	while (s[lp] != '\0')
	{
		lps = 0;
		while (accept[lps] != '\0')
		{
			if (accept[lps] == s[lp])
			{
				p = &s[lp];
				return (p);
			}
			lps++;
		}
		lp++;
	}

	return (0);
}

