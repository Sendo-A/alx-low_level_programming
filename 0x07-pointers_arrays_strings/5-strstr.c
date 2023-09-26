# include "main.h"

/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: entire string
 * @needle: substring
 *
 * Return: pointer to the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return (0);
}

