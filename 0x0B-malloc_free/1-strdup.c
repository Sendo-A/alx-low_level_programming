#include "main.h"

/**
 * _strdub - function that returns a pointer to a newly allocated space
 * in memory which contains a copy
 * of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdub(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
