#include "main.h"
/**
 * last - iterates over *
 * @l2: 2nd string can contain *
 *
 * Return: pointer
 */
char *last(char *l2)
{
	if (*l2 == '*')
		return (last(l2 + 1));
	else
		return (l2);
}
/**
 * logos - magic
 * @l1: 1st string
 * @l2: 2nd string
 *
 * Return: 1 if identical otherwise 0
 */
int logos(char *l1, char *l2)
{
	int snf = 0;

	if (*l2 == 0)
		return (0);
	if (*l1 == *l2)
		snf += afr(l1 + 1, l2 + 1);
	snf += logos(l1 + 1, l2);
	return (snf);
}
/**
 * afr - compare two strings
 * @l1: 1s string
 * @l2: 2nd string
 *
 * Return: 1 if identical otherwise 0
 */
int afr(char *l1, char *l2)
{
	int snf = 0;

	if (!*l1 && l2 == '*' && !*last(l2))
		return (1);
	if (*l1 == *l2)
	{
		if (!*l1)
			return (1);
		return (afr(l1 + 1, *l2 == '*' ? l2 : l2 + 1));
	}
	if (!*l1 || !l2)
		return (0);
	if (*l2 == '*')
	{
		l2 = last(l2);
		if (!*l2)
			return (1);
		if (*l1 == *l2)
			snf += afr(l1 + 1, l2 + 1);
		snf += logos(l1, l2);
	}
	return (0);
}
