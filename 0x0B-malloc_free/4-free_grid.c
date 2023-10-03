#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @height: int
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int k = 0;

	for (; k < height; k++)
		free(grif[k]);
	free(grid);
}
