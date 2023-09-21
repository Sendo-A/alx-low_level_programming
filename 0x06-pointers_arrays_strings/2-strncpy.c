#include "main.h"

/**
 * *_strncpy - function that copies a string.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: butes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];

	while (c < n)

	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
