#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @c: string
 * Return: encoded string
 */

char *leet(char *c)
{
	int k;
	int l;

	char chs[] = "aAeEoOtTlL";
	char rs[] = "4433007711";

	k = 0;
	while (c[k])
	{
		l = 0;
		while (rs[l])
		{
			if (c[k] == chs[l])
				c[k] = rs[l];
			l++;
		}
		k++;
	}
	return (c);
}

