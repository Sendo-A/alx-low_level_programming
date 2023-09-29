#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n:int
 * @nb: int
 *
 * Return: 1 if its a prime nbr otherwise 0
 */
int prime_check(int n, int nb);
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
/**
 * prime_check - check numbers < n if they are dividable
 * @n: int
 * @nb: int
 * Return: int
 */

int prime_check(int n, int nb)
{
	if (nb >= n && n > 1)
		return (1);
	else if (n % nb == 0 || n <= 1)
		return (0);
	else
		return (prime_check(n, nb + 1));
}
