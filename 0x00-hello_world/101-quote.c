#include <unistd.h>
/**
 * main - Entry point
 *
 * function that prints a sentence aside from printf or puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (0);
}
