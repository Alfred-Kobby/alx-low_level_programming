#include "main.h"
/**
 * print_square - check description
 * Description: prints a square
 * @size: first input parameter for print_line
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
