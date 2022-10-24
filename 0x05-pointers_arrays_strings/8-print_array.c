#include "main.h"
#include <stdio.h>
/**
 * print_array - see description
 * Description: prints arrays of n integers
 * @a: in put paramtere for print_array function
 * @n: input parameter for print_array function
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
