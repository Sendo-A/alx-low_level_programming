#include "main.h"
/**
 * print_to_98 - is a function that print natural numbers from n to 98
 *
 * @k: as input for the function
 */
void print_to_98(int k)
{
	int cnt;

	if (n > 98)
		for (cnt = k; cnt > 98; cnt--)
			printf("%d, ", cnt);
	else
		for (cnt = k; cnt < 98; cnt++)
			printf("%d, ", cnt);
	printf("98\n");
}
