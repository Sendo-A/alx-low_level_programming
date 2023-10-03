#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: memory grid
 * @height: int
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int k = 0;

	for (; k < height; k++)
		free(grid[k]);
	free(grid);
}
