#include <main.h>

/**
 * _isdigit - function that checks for a digit from 0 - 9
 *
 * @c: input as param
 *
 * Return: 1 if the cha is a digit otherwise 0
 */
int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
