#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a 2D array of ints
 * @grid: input of 2D array of integers
 * @height: heihgt of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
