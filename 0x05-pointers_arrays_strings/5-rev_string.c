#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: input param for revesed string
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	int n, k;
	char rev;

	for (n = 0; s[n] != '\0'; ++n)
		;

	for (k = 0; k < n / 2; k++)
	{
		rev = s[k];
		s[k] = s[n - 1 - k];
		s[n - 1 - k] = rev;
	}
}
