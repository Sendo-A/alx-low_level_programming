#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: text to write
 * Return: 1 on success otherwise 0
 */

int create_file(const char *filename, char *text_content)
{
	int t;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	t = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (t == -1)
		return (-1);
	if (len)
		bytes = write(t, text_content, len);
	close(t);
	return (bytes == len ? 1 : -1);
}
