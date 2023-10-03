#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, k = 0;
	int size1 = 0, size2 = 0;
	char *outcome;

	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
		size2 = strlen(s2);

	outcome = malloc(size1 + size2 + 1);
	if (outcome == 0)
		return (0);

	for (i = 0; i < size1; i++)
		outcome[i] = s1[i];
	for (k = 0; k < size2; k++)
		outcome[i + k] = s2[k];
	outcome[i + k] = '\0';
	return (outcome);
}
