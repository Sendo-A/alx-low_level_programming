#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer first string
 * @s2: pointer to seconde string
 * @n: nbr of bytes
 * Retrun: 0 if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *wd;
	unsigned int k, l, s1_len, s2_len;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	wd = malloc(s1_len + n + 1);
	if (wd == 0)
	{
		return (0);
	}
	for (k = 0; s1[k] != '\0'; k++)
		wd[k] = s1[k];
	for (l = 0; l < n; l++)
	{
		wd[k] = s2[l];
		k++;
	}
	wd[k] = '\0';
	return (wd);
}
i
