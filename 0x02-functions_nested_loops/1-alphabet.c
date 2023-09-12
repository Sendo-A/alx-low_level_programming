#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet function using _putchar to print the alphabet in lower cases
 *
 * Return: Always 0 (Success).
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
