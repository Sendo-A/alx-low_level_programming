#include "main.h"
/**
 * int _strlen - function that returns the length of a string.
 *
 * @w: input parameter
 *
 * Return: string legth
 */
int _strlen(char *w)
{
	int cnt;

	for (cnt = 0; *w != '\0'; w++)
		++cnt;

	return (cnt);
}
