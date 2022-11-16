#include "function_pointers.h"
/**
 * array_iterator - see description
 * Description: executes functions as a parameter of array
 * @array: input parameter for array_iterator
 * @size: input parametr for array_iterator
 * @action: input function parameter for array_iterator
 * Return: nothinng
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
