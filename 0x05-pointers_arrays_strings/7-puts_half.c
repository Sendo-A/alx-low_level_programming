#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: array type
 *
 * Return: string
 */
void puts_half(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		;

	k++;
	for (k /= 2; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
