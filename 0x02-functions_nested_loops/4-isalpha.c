# include "main.h"
/**
 * _isalpha - checks if either the letter is lower or uppercase
 *
 * @l: as an input to function
 *
 * Return: 1 or 0
 */

int _isalpha(int l)
{
	if (l >= 97 && l <= 122)
		return (1);
	if (l >= 65 && l <= 90)
		return (1);
	return (0);
}
