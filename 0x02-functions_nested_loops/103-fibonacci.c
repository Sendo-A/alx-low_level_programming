#include "main.h"
/**
 * main - Entry point
 *
 * program that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fb1 = 0, fb2 = 1, sum;
	float t_sum;

	while (1)
	{
		sum = fb1 + fb2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			t_sum += sum;

		fb1 = fb2;
		fb1 = sum;
	}
	printf("%.0f\n", t_sum);

	return (0);
}
