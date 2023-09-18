# include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *
 * @w: to print the string param
 *
 * Return: Void
 */
void _puts(char *w)
{
	while (*w != '\0')
	{
		_putchar(*w + 0);
		w++;
	}
	_putchar('\n');
}
