#include "main.h"


/**
 * _isupper - checker wether the character is upper or lower
 * 
 * @c: input param
 *
 * Return: 1 if its uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
