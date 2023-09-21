#include "main.h"
/**
 * *string_toupper -  function that changes all lowercase
 * letters of a string to uppercase
 *
 * @str: retrun a string
 * Return: string
 */

char *string_toupper(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (str[k] >= 97 && str[k] <= 122)
		{
			str[k] = str[k] - 32;
		}
	}
	return (str);
}
