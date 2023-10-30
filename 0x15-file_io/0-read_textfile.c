#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to read
 * @letters: number of bytes to read
 * Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int t;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	t = open(filename, O_RDONLY);
	if (t == -1)
		return (0);
	bytes = read(t, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(t);
	return (bytes);
}
