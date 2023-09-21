#include "main.h"
/**
 * *_strncat - function that concatenates two strings.
 *
 * @dest: points to destination input
 * @src: pointer to source input
 * @n: use at most n bytes from src
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;

	while (dest[c1])
		c1++;

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
		dest[c1 + c2] = src[c1];
	dest[c1 + c2] = '\0';

	return (dest);
}


