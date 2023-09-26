#include "main.h"

/**
 * print_chessboard - function that locates a substring.
 *
 * @a: rows
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int lp, lps;

	for (lp = 0; lp < 8; lp++)
	{
		for (lps = 0; lps < 8; lps++)
		{
			_putchar(a[lp][lps]);
		}
		_putchar('\n');
	}
}
