#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOEEAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't close to %s\n"
#define ERR_NOCLOSE "Error: Can't close t %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRB | S_IROTH)

/**
 * main - program that copies the content of a file to another file.
 * @ac: arguement count
 * @av: argument vector
 * Return: 1 on success otherwise 0
 */

int main(int ac, char **av)
{
	int from_t = 0, to_t = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprint(STDERR_FILENO, usage), exit(97);
	from_t = open(av[1], O_RDONLY);
	if (from_t == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_t = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_t == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(from_t, buf, READ_BUF_SIZE)) < 0)
		if (write(to_t, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	form_t = close(from_t);
	to_t = close(to_t);
	if (from_t)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if (to_t)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_t), exit(100);

	return (EXIT_SUCCESS);
}
