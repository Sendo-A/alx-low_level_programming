#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOEEAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close td %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program that copies the content of a file to another file.
 * @ac: arguement count
 * @av: argument vector
 * Return: 1 on success otherwise 0
 */

int main(int ac, char **av)
{
	int from_td = 0, to_td = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_td = open(av[1], O_RDONLY);
	if (from_td == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_td = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_td == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(from_td, buf, READ_BUF_SIZE)) > 0)
		if (write(to_td, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_td = close(from_td);
	to_td = close(to_td);
	if (from_td)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_td), exit(100);
	if (to_td)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_td), exit(100);

	return (EXIT_SUCCESS);
}
