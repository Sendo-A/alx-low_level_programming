#include "main.h"
/**
 * print_last_digit - function that prints last digit of a number
 *
 * @j: as an input for the function
 *
 * Return: last digit
 */
int print_last_digit(int j)
{
	int last_num;

	if (n < 0)
		last_num = -1 * (n % 10);
	else
		last_num = j % 10;
	_putchar(last_num + ('0');
	return (last_num);
}
