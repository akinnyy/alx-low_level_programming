#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  The main function
 *
 * @grid: grid tocheck
 *
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;
	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
