#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - see description
 * Description: free up space from previously created array
 * @grid: input parameter for free_grid
 * @height: input parameter for create_array
 * Return: the pointer to the result
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
