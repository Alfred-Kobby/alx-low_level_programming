#include "main.h"
/**
 * swap_int - see description
 * Description: swaps two integers
 * @a: first input parameter for swap_int function
 * @b: second input parameter for swap_int function
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
