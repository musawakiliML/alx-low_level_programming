#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that use free function on previous grid
 * @grid: 2 dim. array input to free
 * @height: input height (size)
 * Return: grid freed
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	if (grid != NULL || height != 0)
	{
		for (; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
