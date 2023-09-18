#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @w: input param for revesed string
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	int n, k;
	char rev;

	for (n = 0; s[1] != '\0'; ++n)
		;

	for (k = 0; k < n / 2; k++)
	{
		rev = w[k];
		s[k] = w[n - 1 - k];
		s[n - 1 - k] = rev;
	}
}
