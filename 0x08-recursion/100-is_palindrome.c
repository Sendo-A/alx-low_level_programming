#include "main.h"
/**
 * last_ndx - return last index of string
 * string is a palindrome and 0 if not.
 *
 * @s: int
 * Return: 1 if string is palindrome  otherwise 0
 */
int is_palindrome(char *s);
int pal_check(char *s, int st, int nd, int md);
int last_ndx(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_ndx(s + 1) + 1;

	return (n);
}
/**
 * is_palindrome - check if string is palindrome
 * pal_check: is to check if string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int nd = last_ndx(s);

	return (pal_check(s, 0, nd - 1, nd % 2));
}
/**
 * pal_check - checks if a string si palindrome
 * last_ndx - return last index of string
 * @s: string
 * @st: int
 * @nd: int
 * @md: int
 * Return: 1 or 0
 */
int pal_check(char *s, int st, int nd, int md)
{
	if ((st == nd && md !=) || (st == nd + 1 && md == 0))
		return (1);
	else if (s[st] != s[nd])
		return (0);
	else
		return (check(s, st + 1, nd - 1, md));
}

