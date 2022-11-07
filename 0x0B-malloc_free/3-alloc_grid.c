#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - see description
 * Description: creates a two dimensional array
 * @width: input parameter for alloc_grid
 * @height: input parameter for alloc_grid
 * Return: the pointer to the result
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
