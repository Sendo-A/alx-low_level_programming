#include "main.h"
/**
 * last - iterates over *
 * @l2: 2nd string can contain *
 *
 * Return: pointer
 */
char *last(char *s2)
{
	if (*s2 == '*')
		return (last(s2 + 1));
	else
		return (s2);
}
/**
 * logos - magic
 * @l1: 1st string
 * @l2: 2nd string
 *
 * Return: 1 if identical otherwise 0
 */
int logos(char *s1, char *s2)
{
	int snf = 0;

	if (*s2 == 0)
		return (0);
	if (*s1 == *s2)
		snf += wildcmp(s1 + 1, s2 + 1);
	snf += logos(s1 + 1, s2);
	return (snf);
}
/**
 * afr - compare two strings
 * @l1: 1s string
 * @l2: 2nd string
 *
 * Return: 1 if identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int snf = 0;

	if (!*s1 && *s2 == '*' && !*last(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = last(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			snf += wildcmp(s1 + 1, s2 + 1);
		snf += logos(s1, s2);
	}
	return (0);
}
