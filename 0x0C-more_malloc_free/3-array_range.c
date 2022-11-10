#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - see description
 * Description: creates array of integers
 * @min: input parameter for array_range
 * @max: input parameter for array_range
 * Return: the pointer to the result
 */
int *array_range(int min, int max)
{
	int *new_array;
	int diff, i;

	if (min > max)
		return (NULL);
	diff = max - min;
	new_array = malloc((diff + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);
	for (i = 0; i <= diff; i++)
		new_array[i] = min++;
	return (new_array);
}
