#include "main.h"
/**
 * print_line - check description
 * Description: prints a straignt line
 * @n: first input parameter for print_line
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('\\');
	}
	_putchar('\n');
}
