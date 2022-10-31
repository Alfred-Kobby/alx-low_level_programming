#include "main.h"
/**
 * print_diagsums - see description
 * Description: prints the sum of diaggonal
 * @a: input parameter for print_diagsums function
 * @size: input parameter for print_diagsums
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
