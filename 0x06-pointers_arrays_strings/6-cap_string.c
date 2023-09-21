#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @s: input string
 * Return: the pointer to dests
 */

char *cap_string(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] >= 'a' && s[k] <= 'z')
		{
			if (k == 0 || s[k - 1] == ' ' || s[k - 1] == '\t' || s[k - 1] == '\n' ||
					s[k - 1] == ',' || s[k - 1] == ';' || s[k - 1] == ',' ||
					s[k - 1] == '!' || s[k - 1] == '?' || s[k - 1] == '"' ||
					s[k - 1] == '(' || s[k - 1] == ')' || s[k - 1] == '{' ||
					s[k - 1] == '}')
			{
				s[i] -= 32;
			}
		}
		k++;
	}
	return (k);
}
