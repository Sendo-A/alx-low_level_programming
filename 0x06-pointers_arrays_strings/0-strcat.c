#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;

	while (dest[c1])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);
}
