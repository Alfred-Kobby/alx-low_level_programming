#include "function_pointers.h"
/**
 * int_index - see description
 * Description: search for an integer
 * @array: input parameter for int_index
 * @size: input parametr for int_index
 * @cmp: input function parameter for int_index
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
