# include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string
 * @accept: bytes
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int lp, lps;

	for (lp = 0; s[lp] != '\0'; lp++)
	{
		lps = 0;
		for (; accept[lps] != s[lp]; lps++)
		{
			if (accept[lps] == '\0')
				return (lps);
		}
	}
	return (lp);
}
