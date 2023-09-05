#include "main.h"
/**
 *free_grid - Function to frre a 2 dimensinal grid
 *@grid: the pointer to the pointer of array
 *@height: Height for array
 *
 *Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
